#pragma once

#include <array>
#include <cstddef>
#include <functional>

template <typename P, size_t W, size_t H>
class Image
{
public:
    Image() = default;
    Image(const P& pixel)
        : m_pixels {}
    {
        for (size_t i = 0; i < H; ++i)
        {
            for (size_t j = 0; j < W; ++j)
            {
                m_pixels[i][j] = pixel;
            }
        }
    }

    Image(const std::function<P(size_t i, size_t j)>& generator)
        : m_pixels {}
    {
        for (size_t i = 0; i < H; ++i)
        {
            for (size_t j = 0; j < W; ++j)
            {
                m_pixels[i][j] = generator(i, j);
            }
        }
    }

    const P& operator()(size_t i, size_t j) const { return m_pixels[j][i]; }
    P&       operator()(size_t i, size_t j) { return m_pixels[j][i]; }

    Image<P, W, H> operator+() const
    {
        Image<P, W, H> result;
        for (size_t i = 0; i < H; ++i)
        {
            for (size_t j = 0; j < W; ++j)
            {
                result(i, j) = +m_pixels[i][j];
            }
        }
        return result;
    }

private:
    std::array<std::array<P, W>, H> m_pixels;
};