#pragma once

struct RGBA
{
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

struct RGB
{
    unsigned char r;
    unsigned char g;
    unsigned char b;
};

struct Luma
{
    unsigned char l;
};

template <typename To, typename From>
To convert(const From& stuff);

