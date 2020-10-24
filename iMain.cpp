# include "iGraphics.h"

int x = 300, y = 300, r = 20;

void gettime(int t[])
{
    time_t ctime;
    struct tm * current;
    time ( &ctime );
    current = localtime ( &ctime );
    t[0] = current->tm_hour;
    t[1] = current->tm_min;
    t[2] = current->tm_sec;
}

void number(int n, int p, int q)
{
    int i = p;
    int j = q;
    if(n == 0)
    {
        double xa[] = {i,i+10,i+30,i+40,i+30,i+10};
        double ya[] = {j,j+10,j+10,j,j-10,j-10};
        iFilledPolygon(xa,ya,6); // top
        double xa1[] = {i-5,i+5,i+5,i-5,i-15,i-15};
        double ya1[] = {j,j-10,j-30,j-40,j-30,j-10};
        iFilledPolygon(xa1,ya1,6); // top left
        double xa2[] = {i+45,i+55,i+55,i+45,i+35,i+35};
        double ya2[] = {j,j-10,j-30,j-40,j-30,j-10};
        iFilledPolygon(xa2,ya2,6); // top right
        double xa4[] = {i-5,i+5,i+5,i-5,i-15,i-15};
        double ya4[] = {j-40,j-50,j-70,j-80,j-70,j-50};
        iFilledPolygon(xa4,ya4,6); // bottom left
        double xa5[] = {i+45,i+55,i+55,i+45,i+35,i+35};
        double ya5[] = {j-40,j-50,j-70,j-80,j-70,j-50};
        iFilledPolygon(xa5,ya5,6); // bottom right
        double xa6[] = {i,i+10,i+30,i+40,i+30,i+10};
        double ya6[] = {j-80,j-70,j-70,j-80,j-90,j-90};
        iFilledPolygon(xa6,ya6,6); // bottom
    }
    else if(n == 9)
    {
        double xa[] = {i,i+10,i+30,i+40,i+30,i+10};
        double ya[] = {j,j+10,j+10,j,j-10,j-10};
        iFilledPolygon(xa,ya,6); // top
        double xa1[] = {i-5,i+5,i+5,i-5,i-15,i-15};
        double ya1[] = {j,j-10,j-30,j-40,j-30,j-10};
        iFilledPolygon(xa1,ya1,6); // top left
        double xa2[] = {i+45,i+55,i+55,i+45,i+35,i+35};
        double ya2[] = {j,j-10,j-30,j-40,j-30,j-10};
        iFilledPolygon(xa2,ya2,6); // top right
        double xa3[] = {i,i+10,i+30,i+40,i+30,i+10};
        double ya3[] = {j-40,j-50,j-50,j-40,j-30,j-30};
        iFilledPolygon(xa3,ya3,6); // middle
        double xa5[] = {i+45,i+55,i+55,i+45,i+35,i+35};
        double ya5[] = {j-40,j-50,j-70,j-80,j-70,j-50};
        iFilledPolygon(xa5,ya5,6); // bottom right
        double xa6[] = {i,i+10,i+30,i+40,i+30,i+10};
        double ya6[] = {j-80,j-70,j-70,j-80,j-90,j-90};
        iFilledPolygon(xa6,ya6,6); // bottom
    }
    else if(n == 2)
    {
        double xa[] = {i,i+10,i+30,i+40,i+30,i+10};
        double ya[] = {j,j+10,j+10,j,j-10,j-10};
        iFilledPolygon(xa,ya,6); // top
        double xa2[] = {i+45,i+55,i+55,i+45,i+35,i+35};
        double ya2[] = {j,j-10,j-30,j-40,j-30,j-10};
        iFilledPolygon(xa2,ya2,6); // top right
        double xa3[] = {i,i+10,i+30,i+40,i+30,i+10};
        double ya3[] = {j-40,j-50,j-50,j-40,j-30,j-30};
        iFilledPolygon(xa3,ya3,6); // middle
        double xa4[] = {i-5,i+5,i+5,i-5,i-15,i-15};
        double ya4[] = {j-40,j-50,j-70,j-80,j-70,j-50};
        iFilledPolygon(xa4,ya4,6); // bottom left
        double xa6[] = {i,i+10,i+30,i+40,i+30,i+10};
        double ya6[] = {j-80,j-70,j-70,j-80,j-90,j-90};
        iFilledPolygon(xa6,ya6,6); // bottom
    }
    else if(n == 3)
    {
        double xa[] = {i,i+10,i+30,i+40,i+30,i+10};
        double ya[] = {j,j+10,j+10,j,j-10,j-10};
        iFilledPolygon(xa,ya,6); // top
        double xa2[] = {i+45,i+55,i+55,i+45,i+35,i+35};
        double ya2[] = {j,j-10,j-30,j-40,j-30,j-10};
        iFilledPolygon(xa2,ya2,6); // top right
        double xa3[] = {i,i+10,i+30,i+40,i+30,i+10};
        double ya3[] = {j-40,j-50,j-50,j-40,j-30,j-30};
        iFilledPolygon(xa3,ya3,6); // middle
        double xa5[] = {i+45,i+55,i+55,i+45,i+35,i+35};
        double ya5[] = {j-40,j-50,j-70,j-80,j-70,j-50};
        iFilledPolygon(xa5,ya5,6); // bottom right
        double xa6[] = {i,i+10,i+30,i+40,i+30,i+10};
        double ya6[] = {j-80,j-70,j-70,j-80,j-90,j-90};
        iFilledPolygon(xa6,ya6,6); // bottom
    }
    else if(n == 4)
    {
        double xa1[] = {i-5,i+5,i+5,i-5,i-15,i-15};
        double ya1[] = {j,j-10,j-30,j-40,j-30,j-10};
        iFilledPolygon(xa1,ya1,6); // top left
        double xa2[] = {i+45,i+55,i+55,i+45,i+35,i+35};
        double ya2[] = {j,j-10,j-30,j-40,j-30,j-10};
        iFilledPolygon(xa2,ya2,6); // top right
        double xa3[] = {i,i+10,i+30,i+40,i+30,i+10};
        double ya3[] = {j-40,j-50,j-50,j-40,j-30,j-30};
        iFilledPolygon(xa3,ya3,6); // middle
        double xa5[] = {i+45,i+55,i+55,i+45,i+35,i+35};
        double ya5[] = {j-40,j-50,j-70,j-80,j-70,j-50};
        iFilledPolygon(xa5,ya5,6); // bottom right
    }
    else if(n == 5)
    {
        double xa[] = {i,i+10,i+30,i+40,i+30,i+10};
        double ya[] = {j,j+10,j+10,j,j-10,j-10};
        iFilledPolygon(xa,ya,6); // top
        double xa1[] = {i-5,i+5,i+5,i-5,i-15,i-15};
        double ya1[] = {j,j-10,j-30,j-40,j-30,j-10};
        iFilledPolygon(xa1,ya1,6); // top left
        double xa3[] = {i,i+10,i+30,i+40,i+30,i+10};
        double ya3[] = {j-40,j-50,j-50,j-40,j-30,j-30};
        iFilledPolygon(xa3,ya3,6); // middle
        double xa5[] = {i+45,i+55,i+55,i+45,i+35,i+35};
        double ya5[] = {j-40,j-50,j-70,j-80,j-70,j-50};
        iFilledPolygon(xa5,ya5,6); // bottom right
        double xa6[] = {i,i+10,i+30,i+40,i+30,i+10};
        double ya6[] = {j-80,j-70,j-70,j-80,j-90,j-90};
        iFilledPolygon(xa6,ya6,6); // bottom
    }
    else if(n == 6)
    {
        double xa[] = {i,i+10,i+30,i+40,i+30,i+10};
        double ya[] = {j,j+10,j+10,j,j-10,j-10};
        iFilledPolygon(xa,ya,6); // top
        double xa1[] = {i-5,i+5,i+5,i-5,i-15,i-15};
        double ya1[] = {j,j-10,j-30,j-40,j-30,j-10};
        iFilledPolygon(xa1,ya1,6); // top left
        double xa3[] = {i,i+10,i+30,i+40,i+30,i+10};
        double ya3[] = {j-40,j-50,j-50,j-40,j-30,j-30};
        iFilledPolygon(xa3,ya3,6); // middle
        double xa4[] = {i-5,i+5,i+5,i-5,i-15,i-15};
        double ya4[] = {j-40,j-50,j-70,j-80,j-70,j-50};
        iFilledPolygon(xa4,ya4,6); // bottom left
        double xa5[] = {i+45,i+55,i+55,i+45,i+35,i+35};
        double ya5[] = {j-40,j-50,j-70,j-80,j-70,j-50};
        iFilledPolygon(xa5,ya5,6); // bottom right
        double xa6[] = {i,i+10,i+30,i+40,i+30,i+10};
        double ya6[] = {j-80,j-70,j-70,j-80,j-90,j-90};
        iFilledPolygon(xa6,ya6,6); // bottom
    }
    else if(n == 7)
    {
        double xa[] = {i,i+10,i+30,i+40,i+30,i+10};
        double ya[] = {j,j+10,j+10,j,j-10,j-10};
        iFilledPolygon(xa,ya,6); // top
        double xa2[] = {i+45,i+55,i+55,i+45,i+35,i+35};
        double ya2[] = {j,j-10,j-30,j-40,j-30,j-10};
        iFilledPolygon(xa2,ya2,6); // top right
        double xa5[] = {i+45,i+55,i+55,i+45,i+35,i+35};
        double ya5[] = {j-40,j-50,j-70,j-80,j-70,j-50};
        iFilledPolygon(xa5,ya5,6); // bottom right
    }
    else if(n == 8)
    {
        double xa[] = {i,i+10,i+30,i+40,i+30,i+10};
        double ya[] = {j,j+10,j+10,j,j-10,j-10};
        iFilledPolygon(xa,ya,6); // top
        double xa1[] = {i-5,i+5,i+5,i-5,i-15,i-15};
        double ya1[] = {j,j-10,j-30,j-40,j-30,j-10};
        iFilledPolygon(xa1,ya1,6); // top left
        double xa2[] = {i+45,i+55,i+55,i+45,i+35,i+35};
        double ya2[] = {j,j-10,j-30,j-40,j-30,j-10};
        iFilledPolygon(xa2,ya2,6); // top right
        double xa3[] = {i,i+10,i+30,i+40,i+30,i+10};
        double ya3[] = {j-40,j-50,j-50,j-40,j-30,j-30};
        iFilledPolygon(xa3,ya3,6); // middle
        double xa4[] = {i-5,i+5,i+5,i-5,i-15,i-15};
        double ya4[] = {j-40,j-50,j-70,j-80,j-70,j-50};
        iFilledPolygon(xa4,ya4,6); // bottom left
        double xa5[] = {i+45,i+55,i+55,i+45,i+35,i+35};
        double ya5[] = {j-40,j-50,j-70,j-80,j-70,j-50};
        iFilledPolygon(xa5,ya5,6); // bottom right
        double xa6[] = {i,i+10,i+30,i+40,i+30,i+10};
        double ya6[] = {j-80,j-70,j-70,j-80,j-90,j-90};
        iFilledPolygon(xa6,ya6,6); // bottom
    }
    else
    {
        double xa2[] = {i+45,i+55,i+55,i+45,i+35,i+35};
        double ya2[] = {j,j-10,j-30,j-40,j-30,j-10};
        iFilledPolygon(xa2,ya2,6); // top right
        double xa5[] = {i+45,i+55,i+55,i+45,i+35,i+35};
        double ya5[] = {j-40,j-50,j-70,j-80,j-70,j-50};
        iFilledPolygon(xa5,ya5,6); // bottom right
    }
}

void iDraw()
{
    iClear();
    int h1, h2, m1, m2, s1, s2;
    int t[3] = {};
    gettime(t);
    h1 = t[0] / 10;
    h2 = t[0] % 10;
    m1 = t[1] / 10;
    m2 = t[1] % 10;
    s1 = t[2] / 10;
    s2 = t[2] % 10;
    iSetColor(255, 0, 0);
    number(h1,20,350);
    number(h2,100,350);
    if(s2%2 != 0)
    {
        iFilledCircle(185,330,5);
        iFilledCircle(185,290,5);
    }
    number(m1,230,350);
    number(m2,310,350);
    if(s2%2 != 0)
    {
        iFilledCircle(395,330,5);
        iFilledCircle(395,290,5);
    }
    number(s1,440,350);
    number(s2,520,350);
    iText(185, 100, "MD. AL IMRAN (BUET,CSE'15)");
}

void iMouseMove(int mx, int my)
{
    printf("x = %d, y= %d\n",mx,my);
}

void iMouse(int button, int state, int mx, int my)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        x += 10;
        y += 10;
    }
    if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {
        x -= 10;
        y -= 10;
    }
}

void iKeyboard(unsigned char key)
{
    if (key == 'q')
    {
        exit(0);
    }
}

void iSpecialKeyboard(unsigned char key)
{

    if (key == GLUT_KEY_END)
    {
        exit(0);
    }
}

int main()
{
    iInitialize(600, 600, "DIGITAL CLOCK");
    return 0;
}

