#include <iostream>

const int IMAGE_WIDTH  = 256;
const int IMAGE_HEIGHT = 256;

int main()
{
    std::cout << "P3\n" << IMAGE_WIDTH << ' ' << IMAGE_HEIGHT << "\n255\n";

    // Render loop to image
    for (int j = IMAGE_HEIGHT-1; j >= 0; --j) {
        for (int i = 0; i < IMAGE_WIDTH; ++i) {
            std::cerr << "\rScanlines remaining: " << j << '\n';

            float r = float(i) / (IMAGE_WIDTH-1);
            float g = float(j) / (IMAGE_HEIGHT-1);
            float b = 0.25;

            int image_r = static_cast<int>(255.999 * r);
            int image_g = static_cast<int>(255.999 * g);
            int image_b = static_cast<int>(255.999 * b);

            std::cout << image_r << ' ' << image_g << ' ' << image_b << '\n';
        }
    }
}