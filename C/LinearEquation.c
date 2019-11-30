#include <stdio.h>

typedef struct { float x; float y; } Point;
typedef struct { Point p1; Point p2; } Line;
typedef struct { float m; float c; } Equation;

// makePoint included with x,y
Point makePoint(float x, float y){
        Point ptemp;
        ptemp.x = x;
        ptemp.y = y;
        return ptemp;
}
//line1 included with x1,y1 and x2,y2
float lineSlope(Line line1){
    float slope;
    float dy = line1.p2.y - line1.p1.y;
    float dx = line1.p2.x - line1.p1.x;
    if(dx == 0){
        return slope =0;
    }
        else
        return slope = dy/dx;
}

//find y=mx+c
Equation lineEquation(Line line1){
    Equation etemp;
    if(lineSlope(line1) == 0){
        etemp.m=0;
        etemp.c =0;
        return etemp;
    }
    else{
    etemp.m = lineSlope(line1);
    etemp.c = line1.p1.y/(etemp.m*line1.p1.x);
    return etemp;
    }

}


// perpedicular * normal = -1
Equation perpendicular(Line line1) {
    Equation etemp;
    if(lineSlope(line1) == 0){
        etemp.m = 0 ;
        etemp.c = 0;
        return etemp;
    }
    else{
    etemp.m = lineSlope(line1)*(-1/lineSlope(line1));
    etemp.c = 0;
    return etemp;
    }

}

//Equation perpendicularatCENTER(Line line1) {
//    Equation etemp;
//    if(lineSlope(line1) == 0){
//        etemp.m = 0;
//    }
//    else{
//    etemp.m = (lineSlope(line1))*(-1/lineSlope(line1));
//    }
//    etemp.c = ( (line1.p1.y+line1.p2.y) /2) - (etemp.m * (line1.p1.x+line1.p2.x) /2);
//    return etemp;
//}

int main(void)
{
    //test (10,10), (20,20) as in class
    Line line1;
    printf("Enter x1 : ");
    scanf("%f",&line1.p1.x);
    printf("Enter y1 : ");
    scanf("%f",&line1.p1.y);
    printf("Enter x2 : ");
    scanf("%f",&line1.p2.x);
    printf("Enter y2 : ");
    scanf("%f",&line1.p2.y);

    if(line1.p1.x == line1.p2.x && line1.p1.y == line1.p2.y)
        printf("This is the same point !\n");
    else{
    printf("Linear equation : y= mx + c\n");
    printf("Slope = %.2f\n",lineSlope(line1));
    printf("Your equation  : y = %.2fx + %.2f\n",lineEquation(line1).m,lineEquation(line1).c);
    printf("Your perpendicular equation : y = %.2fx + c\n",perpendicular(line1).m);
//    printf("Your perpendicular at center equation  : y = %.2fx + %.2f\n",perpendicularatCENTER(line1).m,perpendicularatCENTER(line1).c);
        }

    return 0;
}

