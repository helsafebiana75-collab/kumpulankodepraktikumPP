#include <ncurses/ncurses.h>
#include <windows.h>
using namespace std;

int main(){
    initscr();

    start_color();
    init_pair(1, COLOR_WHITE, COLOR_RED);
    init_pair(2, COLOR_RED, COLOR_WHITE);

    attron(COLOR_PAIR(1));
    mvprintw(2, 2, "A");
    refresh();
    Sleep(500);

    attron(COLOR_PAIR(2));
    mvprintw(3, 2, "S");
    refresh();
    Sleep(1000);

    attron(COLOR_PAIR(1));
    mvprintw(4, 2, "U");
    refresh();
    Sleep(1500);

    attron(COLOR_PAIR(2));
    mvprintw(5, 2, "N");
    refresh();
    Sleep(500);

    attron(COLOR_PAIR(1));
    mvprintw(6, 2, "A");
    refresh();

    getch();
    endwin();

    return 0;
}