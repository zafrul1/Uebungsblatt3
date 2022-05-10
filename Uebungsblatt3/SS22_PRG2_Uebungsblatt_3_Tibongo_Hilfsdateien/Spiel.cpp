#include "Spiel.h"

void Spiel::init() {

	Console::verstecken();  
	ausgabeLogo();
	ausgabeRahmen();
	ausgabeLegende();
	ausgabeSteuerung();


}

void Spiel::ausgabeLogo() {

        std::cout << "        ,----,                                                                         " << std::endl; 
        std::cout << "      ,/   .`|                       ,----..            ,--.                ,----..    " << std::endl;
        std::cout << "    ,`   .'  :   ,---,    ,---,.    /   /   \         ,--.'|  ,----..      /   /   \   " << std::endl;
        std::cout << "  ;    ;     /,`--.' |  ,'  .'  \  /   .     :    ,--,:  : | /   /   \    /   .     :  " << std::endl;
        std::cout << ".'___,/    ,' |   :  :,---.' .' | .   /   ;.  \,`--.'`|  ' :|   :     :  .   /   ;.  \ " << std::endl;
        std::cout << "|    :     |  :   |  '|   |  |: |.   ;   /  ` ;|   :  :  | |.   |  ;. / .   ;   /  ` ; " << std::endl;
        std::cout << ";    |.';  ;  |   :  |:   :  :  /;   |  ; \ ; |:   |   \ | :.   ; /--`  ;   |  ; \ ; | " << std::endl;
        std::cout << "`----'  |  |  '   '  ;:   |    ; |   :  | ; | '|   : '  '; |;   | ;  __ |   :  | ; | ' " << std::endl;
        std::cout << "    '   :  ;  |   |  ||   :     \.   |  ' ' ' :'   ' ;.    ;|   : |.' .'.   |  ' ' ' : " << std::endl;
        std::cout << "    |   |  '  '   :  ;|   |   . |'   ;  \; /  ||   | | \   |.   | '_.' :'   ;  \; /  | " << std::endl;
        std::cout << "    '   :  |  |   |  ''   :  '; | \   \  ',  / '   : |  ; .''   ; : \  | \   \  ',  /  " << std::endl;
        std::cout << "    ;   |.'   '   :  ||   |  | ;   ;   :    /  |   | '`--'  '   | '/  .'  ;   :    /   " << std::endl;
        std::cout << "    '---'     ;   |.' |   :   /     \   \ .'   '   : |      |   :    /     \   \ .'    " << std::endl;
        std::cout << "              '---'   |   | ,'       `---`     ;   |.'       \   \ .'       `---`      " << std::endl;
        std::cout << "                      `----'                   '---'          `---`                    " << std::endl;
                                                                                       



}

