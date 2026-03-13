# include<stdio.h>
float square(float length ){
    float area = length * length;
    return area;
}

float circle(float radius){
    float area = 3.14159 * radius * radius;
    return area;
}

float rectangle(float length, float width){
    float area = length * width;
    return area;
}

float triangle(float base, float height){
    float area = 0.5 * base * height ;
    return area;
}

int main(){
    
    printf("The first shape contains a semi circle and a rectangle\n");
    float area = circle(4)/2 + rectangle(12,8);
    printf("Area of shape 1 = %.2fft\n",area);

    printf("The second shape contains a rectangle and a triangle\n");
    float area1 = rectangle(8,13) + triangle(8,6);
    printf("Area of shape 2 = %.2fin\n", area1);

    printf("The third shape contains a rectangle and a square\n");
    float area2 = rectangle(11,4) + square(5);
    printf("Area of shape 3 = %.2fcm\n", area2);

    printf("The fourth shape contains a triangle and a semicircle\n");
    float area3 = triangle(8,7) + circle (4)/2;
    printf("Area of shape 4 = %.2fft\n",area3);

    printf("The fifth shape contains a square and a triangle\n");
    float area4 = square(7) + triangle(7,4);
    printf("Area of shape 5 = %.2fm\n", area4);

    printf("The sixth shape conntains a rectangle and a square\n");
    float area5 = rectangle(6,12) + square(6);
    printf("Area of shape 6 = %.2fsq yd\n",area5);

//THE SECOND WORK SHEET
    printf("The first shape contains a semi circle, a triangle and a rectangle\n");
    float area6 = circle(9)/2 + rectangle(13,12) + triangle(12,13);
    printf("Area of shape 1 = %.2fin\n",area6);

    printf("The second shape contains a trapezoid with a triangle cut out of it\n");
    float area7 = rectangle(19,15) - triangle(19,7);
    printf("Area of shape 2 = %.2fft\n",area7);

    printf("The third shape contains a circle with a triangle inscribed within it\n");
    float area8 = circle(6) + triangle(12,6);
    printf("Area of shape 3 = %.2fyd\n",area8);

    printf("The fourth shape contains a rectangle and a square\n");
    float area9 = square(11) + rectangle(11,7);
    printf("Area of shape 4 = %.2fin\n",area9);

    printf("The fifth shape contains a semicircle and a rectangle\n");
    float area10 = circle(11)/2 + rectangle(13,22);
    printf("Area of shape 5 = %.2fft\n",area10);

    printf("The sixth shape contains two rectangles and a triangle\n");
    float area11 = rectangle(17,5) + rectangle(7,17) + triangle(14,17);
    printf("Area of shape 6 = %.2fyd\n",area11);

return 0;
}