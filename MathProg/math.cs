public static double SquareRoot(double number)
{
    double x = number;
    double y = 1;
    double e = 0.000001; // precision

    while (x - y > e)
    {
        x = (x + y) / 2;
        y = number / x;
    }

    return x;
}
public static double CubeRoot(double number)
{
    double x = number;
    double y = 1;
    double e = 0.000001; // precision

    while (Math.Abs(x - y) > e)
    {
        y = ((2 * x) + (number / (x * x))) / 3;
        x = y;
    }

    return x;
}
public static double Power(double baseNumber, double exponent)
{
    double result = 1.0;

    for (int i = 0; i < exponent; i++)
    {
        result *= baseNumber;
    }

    return result;
}

double sqrtResult = SquareRoot(16.0); // returns 4.0
double cbrtResult = CubeRoot(27.0); // returns 3.0
double powerResult = Power(2.0, 3.0); // returns 8.0