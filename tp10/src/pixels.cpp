#include "pixels.hpp"

template <>
RGBA convert<RGBA, RGB>(const RGB& x)
{
    return { x.r, x.g, x.b, 255 };
}

template <>
RGB convert<RGB, RGBA>(const RGBA& x)
{
    return { x.r, x.g, x.b };
}

template <>
Luma convert<Luma, RGB>(const RGB& x)
{
    return { static_cast<unsigned char>(0.299 * x.r + 0.587 * x.g + 0.114 * x.b) };
}

template <>
RGB convert<RGB, Luma>(const Luma& x)
{
    return { x.l, x.l, x.l };
}

template <>
Luma convert<Luma, RGBA>(const RGBA& x)
{
    return convert<Luma>(convert<RGB>(x));
}

template <>
RGBA convert<RGBA, Luma>(const Luma& x)
{
    return convert<RGBA>(convert<RGB>(x));
}

template <>

RGBA convert<RGBA, RGBA>(const RGBA& x)
{
    return x;
}

template <>
RGB convert<RGB, RGB>(const RGB& x)
{
    return x;
}

template <>
Luma convert<Luma, Luma>(const Luma& x)
{
    return x;
}
