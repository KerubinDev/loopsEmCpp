#include <iostream>
using namespace std;

int main() {
    int num_linhas;

    cout << "Digite o número de linhas: ";
    cin >> num_linhas;

    for(int i = 1; i <= num_linhas; i++) {
        for(int j = 0; j < i; j++) {
            cout << "&&&&@@@&&&&&&###BB####BPGGGGGBB##&#PYJYB#B5J?7!77???????JJJJJJJJJJJJJYYYYYYYY55555PPPPPGGPPGGGGGGGBB
&&######&&&&&####BP5G#GJJ5P5PGBBBB5J?7JG#GJ??777777777??JJJJJJJJJJJJJJYYYYYYYYY55PPPPPPPPPPPGGGGGGGB
BBBGGPPGBBBB##B#&BYYY55??Y5JJGBP55YYJJYPBP??7777777777???????JJJJJJJJYYYJJYYYYYY555PPPPPPPPPGGGGGGGB
###BBBGGGBB#&###&B5YJP57!?Y?JY55YY5JJGBBGY?77777777777???????JJJ???JJJYYYYYYYYYYY555PPPPPPPPGGGGGGGB
&&&&&&&&&&&&&&##&#P5PPY77JJJ5YJYPGGGB###PJ7!!7!!7!7777?????????????JJJYYYYYYYYYYYY555PPPPPPPPGGGGGGB
&&&&&&&&&&@@&&###&##&&##&&&&&&&&&&&@&&#B5?!!!!!7777777????JJ??????JJJYJJJJJJYYYYYY5555PPPPPPPPGGGGGG
&&&&&&&&&&@@&&&##&##&&&&@@@@@@@@@@@&&&#GY77!!77777777????JJJJJJ??JJJJJJJJJJJYYYYYY55555PPPPPPPGGGGGG
&&&&&&&&&@@@&B###&#BBBBB#&&&&&GPP5G####GY7777?????????JJJJJJJJJJJJJJYJJJJJYYYY55555PPPPPPPPPGGGGGGGG
@@@@@@@@@@@@G?5B#&#B5?77?YPJ7PPPY!~7JYPPJ???????????JJJJJJJJJJJJJJJJJJJJJYYYYY5Y55PPPPPPPPPPPGGGGGGG
@@@@@@@@@@@&P?JP#&&BJ?!!!J57^YPPJ~:!?J55J???JJJJJJJJJJYYYYYYYYYYJYYYYYYYYYY555555PPPY?77??YY5PGGGGGG
&&@@&&&&&&@&PJ?5B&@G?YJ7?Y57^YPPJ!^7?Y55JJ?JJJJYYYYYYYYYYYYYYYYYYYY555555555PPPPPPJ!^^~!7?JY55PGGGGG
BB##BB#&&&&@#55B#&@G755?YY57:YGPY!^7JY55YJJYYYYYYYYYYYJ555YYY55YY55555Y55555PPPPY7^^~7?JYPGGGGGGGGGG
######&@&&&@&GG#&###BBBPGGGPYPGP5J!7JYP5YYYY55555555J?JPP5555PP55555555PPPPPPPPJ~^~7?YYPGBBGGGGGGGGG
&&&###&&###BGPGGGGGPPPPPGGGGGGGGBBPJ?Y55555555P55P5J?YGGPPPPPPPPPPPPPPPPPPPPPPY~~7?Y55GBB#GGGGGGGGGB
BBBGGGGPPPP55555Y55YYYYYYYYYYYY5555J77JY5YJ555555YJJYGBGPPPPPPGGPPPPPPGGPPPPPP7!?Y5PGBB#BGPPGGGGGGGB
PPP55555555YYYYYYYYYYYYYYYJJJJYJJYY?7!??7!!J55Y5Y?JY5PBBGGGGGGGGGGGGPPPPPGGPGY^7Y5PGBBBBGPGGGGGGGGGB
P555P555YYYYYYYJJJJ??JJ???????JJJY??55PJ7~^7PGPBBGBGY5PGGB####BBBGGGGGGGGGGGG?~?JYPGBBGGGPPGGGGGGGGB
YYYYYYYYYJJJ??J????????????????J??7JG#&Y:::!JYG&@&@&PYPBB#&&&&#BBBBGGGGGBBBG?^7??YPGGGGGGGGGBGGGGGGB
YYYYYYYJJJJJJ?7777!!!7??JYY555555J7?JY?~:^^~!7Y5PPGPPGB#&&&&&&&#BBBBBBBBBBB?^!777J5GBBGGGGGGGGGGGGGB
YJ?????77!!!!~~~^^~7Y5555555P5PP55Y~..^5PPPP57~~^~?G&&###&&&&&&&##BBBBBBBBJ~!!~~7P####BGGGGGGGBBGGGB
?777!!!~~^^^^^~!!?5GGP5PGP5PP555JJ!..:~5&&&BPJ7!!!JG#####&&&&&&&&########Y!!!~~JGBBGPPGBBBBBBGBBBBGB
Y55Y?!~^^^^~~!?Y5PGGP5PGP5555555Y7:^~!JYB&BGP55YJ?J5PGGB#&&&@&&&&&&#GP55J~~^^~7?7~~^^~!?YGBBBBBBBBBB
&@@@&B5J7!7??J5PGBBGPPP555P5PPPPJ!~!JY5PBBBBGGPPP555PGGGB&&@@&&&&#Y!:........::........:^?GBBBBBBBBB
@@@@@@#5?????YPPB#GPGP55PPPPPP55J~~7?JYPGGBBBBGGPPPPPPPPG#&@@@&&#7..::^^^^~~^^^^::::....:!GBBBBBBBBB
B#&&&G7~!!7??Y5GGPGBG5PPPPPPP555?^^~7?JJY5PPPPPPPPPPPPPPPG#@@@&@5^^~!!!!77777777!~~^^^^^~7PBBBB#BB##
JJ5P5!::~!7?J5PGGGBBPPGP5PPPP5P5~::^!7?JY555555PPPPPPPPPPPG&@@&@B77JJYYYY5555555YJ????JJYYGBBB##BB##
J?7!!^::~!7?JYPPGBBP5P55PPPPPPPY~::^~!7?Y55555PPPPPPP55555G&@@@#?:^7Y5PPGGGBBGP5J??JY5PPP5GB##BB####
7~^~~~~~~!7?JY55PP55GGPPPPPPPPP5~::^^~!7JY555555555555YYYYP#@@&?...^!7777????7!~~~~!7?JY55GB########
~~~!7777!!!7?JY5P55PBPPPPPPPPGG5~::^^^~7?JY55555555555YYYY5P#@&?~~!!!77777!!!!~~~~~~~~~!J5GB########
!!7?J555J7!77?Y55PGGP55P55PGGBBY^:^^^^~!7?YY55555555YYYYYYJJJYPPJJY5555555555YJ?????7???YP##########
Y5PGGGPP5J7!7?JYY5PP55YYY5PGB#&Y^^^^^~~~!7?JYYYYYYYYYYYYYJ?7!~~!!!?Y5PPPPPPPPPPPPPPPPP55G#&#######&&
BG5YJ?????7!!7?JYYY555YJY5GB&@#!:^^~~~~~~~!7?JYYYYYJJYYYJ??7!!^^^~?Y5PPPPGGPPPPPPPPPPPPP#&&&########
Y?????777777!!7JY55YJJ?7?YG&@@J::^^~~~!~~!!!7?JJJJJJYYYYJJ??7!~^:^!?Y5555PPPPPPPPPPPPPPB&@@@&#######
J?J????777!7?7!7?YYJ?7!~!?5B&G~:^^~~!!!!!!!!77?JJJJJYYYYYJ???7~::::~?Y5PPPGGPPPPPPPPPPG&@@@@&&######
J??????7777!!77!!7??777???JYPP!^^~!!!77777777???JJJYY5YYYYYJJ!^:::.:!J55PPPPPPPPPP55PB&@@@@@@&&&###&
JJJ???????777777!!777JJYYYYPPPJ~~!!7777777????JJJYY55PP5555J7!^^^:::::~!?JY5555PPPGGB&@@@@@@@@&&&&&&
JJJJJ?JJJ?77777777!!?J?777?YPP7^~!!777?????JJJYY5PPGGBGGPP5J7!~^^^^^^^^^^~!7?JY5G#&&@@@@@@@@@@&&&&&&
YYYJYYJJJ?????JJJ?7!!!7??!7?Y?^:^~!77?JY5555PPPPGB##&&##BGPY?7!~~~~~~~~!!77?J5PB&&@&@@@@&&&@@@@@&&&&
5YYYYJJJJ??JJJJ???777!7??!77?!^^^^^~~!7?YPBBB#B##&&@@@@&&#BG5Y?7777777??JY5GB#&&&&&&&&&&&&&&&@@@&&&&
555YYJJ???JYYJJ??????77!!7??77~^^^^^^^^^~7YG#&&&&&&@@@@@@@&&#BPPP55555PGB#&&&&&&&&&&&&&&&&&&&&&&&&&&
555YYJJJJYYYJJJ?77777!!!!7???77~^^^^^^^^^~~7P&@@&&@@&&&&&&@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&
P5555YYYYY5YJJ???7????????777??7!~~^^^^~~~~~!5#@@&&&&&&&&&&@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&@
5555YYYYY555YYYY555JJJ????7777???77!~~~~~~~!~!JB&&&&&&&&&&&##&&@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&
P5PPP555555YYYYYYYJJY5YJ????????????7!~~~~!!!!!?YPPPGBGPPP55Y5GBB#&@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&@@@
PPGGPPP55555555YYYYYJJJJ??????????JJJ?!!!~!!!!~!7????JJYYJJJYYYYY5PGB#&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@
PPGBBGP5555555YYYYYYJJJJ????????????JJ?!!!!!!!!~!!7???7?JYJ?????JJJJJ5PG#&&&&&@@@@@@@@@@@@@@@@@@@@@@
GGGPPPPP55555555YYYYYJJJJJ?????????JJJJ7!!!!!!!!!!7J5YJ??YYYYJJJJJJJJJJY5GB#&&&&@@@@@@@@@@@@@@@@@@@@";
        }
        cout << endl;
    }

    return 0;
}