#ifndef BALL_H
#define BALL_H

#include <QImage>
#include <QRect>

class Ball
{
public:
    Ball();
    ~Ball();

public:
    void resetState();
    void autoMove();
    void setXDir(int);
    void setYDir(int);
    int getYDir();
    QRect getRect();
    QImage & getImage();

private:
    int xdir = 1;
    int ydir = -1;
    QImage image;
    QRect rect;
    static const int INITIAL_X = 230;
    static const int INITIAL_Y = 355;
    static const int RIGHT_EDGE = 300;
};

#endif // BALL_H
