#pragma once

#include <array>
#include <cstddef>

template <typename P, size_t W, size_t H>
class Image
{
public:
    Image() = default;
    Image(const P& pixel)
        :
    {
        for (auto& row : m_pixels)
        {
            for (auto& p : row)
            {
                p = pixel;
            }
        }
    }

    const P& operator()(size_t i, size_t j) const { return m_pixels[i][j]; }
    P&       operator()(size_t i, size_t j) const { return m_pixels[i][j]; }

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