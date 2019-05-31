#include <3ds.h>
#include <iostream>

int main(int argc, char **argv) {
    gfxInitDefault();
    consoleInit(GFX_TOP, NULL);

	int number = 1;


               
		while (number >= 0) {
                if(hidKeysDown() & KEY_START)
                    break;
 
                hidScanInput();
                                if(hidKeysDown() & KEY_A)
                                    number = 1;

				std::cout << number << std::endl;
				number++;

}


    while(aptMainLoop()) {
        gspWaitForVBlank();

                hidScanInput();


        gfxFlushBuffers();
        gfxSwapBuffers();
    }
    gfxExit();
    return 0;
}
