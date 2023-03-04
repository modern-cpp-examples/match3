// 4.21.1 0x3d90f8c4
// Generated by imageconverter. Please, do not edit!

#include <images/BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_img1[]; // BITMAP_IMG1_ID = 0, Size: 38x37 pixels
extern const unsigned char image_img2[]; // BITMAP_IMG2_ID = 1, Size: 35x36 pixels
extern const unsigned char image_img3[]; // BITMAP_IMG3_ID = 2, Size: 35x35 pixels
extern const unsigned char image_img4[]; // BITMAP_IMG4_ID = 3, Size: 35x35 pixels
extern const unsigned char image_img5[]; // BITMAP_IMG5_ID = 4, Size: 34x36 pixels
extern const unsigned char image_match[]; // BITMAP_MATCH_ID = 5, Size: 38x37 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_img1, 0, 38, 37, 10, 9, 18, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 19, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_img2, 0, 35, 36, 5, 5, 25, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 27, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_img3, 0, 35, 35, 8, 4, 23, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 23, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_img4, 0, 35, 35, 5, 4, 25, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 27, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_img5, 0, 34, 36, 5, 4, 24, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 22, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_match, 0, 38, 37, 0, 0, 0, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 0, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase
