
#include "TXLib.h"

void MoveBall ();

int main ()
    {
    txCreateWindow (1500, 900);

    MoveBall();
    }

void MoveBall ()
    {
    int x = 150;
    int y = 100;
    double Vx = 0.5;
    double Vy = 0.5;
    int dt = 1;

    while (GetAcyncKeyState(VK_ESCAPE))
        {
        DrawBall (int x, int y, double Vx, double Vy, int dt);

        x = 150 + Vx * dt;
        y = 100 + Vy * dt;

        if (x > 1500)
            {
            Vx = -Vx;
            }

        if (y > 900)
            {
            Vy = -Vy;
            }

        if (x < 0)
            {
            Vx = -Vx;
            }

        if (y < 0)
            {
            Vy = -Vy;
            }
        }
    }






