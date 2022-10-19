#include "rayt.h"

int main()
{
	int nx = 200;
	int ny = 100;
	std::unique_ptr<rayt::Image> image(std::make_unique<rayt::Image>(nx, ny));

	for (int j = 0; j < ny; ++j)
	{
		std::cerr << "Rendering (y = " << j << ") " << (100.0 * j / (ny - 1)) << "%" << std::endl;
		for (int i = 0; i < nx; ++i)
		{
			float r = float(i) / float(nx);
			float g = float(j) / float(ny);
			float b = 0.5f;
			image->write(i, j, r, g, b);
		}
	}

	return 0;
}