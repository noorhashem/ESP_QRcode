#include <Adafruit_SSD1305.h>

class QRcode
{
	private:
		Adafruit_SSD1305 *display;
		void render(int x, int y, int color);

	public:
		QRcode(Adafruit_SSD1305 *display);

		void init();
		void debug();
		void screenwhite();
		void create(String message);
};
