#include "../include/utils.h"
#include "../include/tty.h"

void print_logo()
{
    printk("\t                                                         \n");
    printk("\t  _____        _                           ____    _____ \n");
    printk("\t |  __ \\      (_)                         / __ \\  / ____|\n");
    printk("\t | |__) |_ __  _  _ __ ___   _   _  ___  | |  | || (___  \n");
    printk("\t |  ___/| '__|| || '_ ` _ \\ | | | |/ __| | |  | | \\___ \\ \n");
    printk("\t | |    | |   | || | | | | || |_| |\\__ \\ | |__| | ____) |\n");
    printk("\t |_|    |_|   |_||_| |_| |_| \\__,_||___/  \\____/ |_____/ \n");
    printk("\t                                                         \n");
    printk("\t                                                         \n");
}

void about(char *version)
{
    printk("\n\tPrimusOS - v%s - A simple 32-bit Ring 0 operating system", version);
    printk("\n\tProvided under the GNU General Public License v3.0");
    printk("\n\tInspired by Terry A. Davis (in memoriam)");
    printk("\n\tGitHub repository: https://github.com/araujo88/primus-os\n");
}