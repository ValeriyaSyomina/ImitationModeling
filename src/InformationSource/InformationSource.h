#ifndef INFORMATIONSOURCE_H
#define INFORMATIONSOURCE_H

#include "../Generator/NormalGenerator.h"

class InformationSource
{
private:
    NormalGenerator normalGenerator;
public:
    InformationSource() {}
    InformationSource(double sigma, double matExp, int minBorder, int maxBorder, int iterationNumber):
        normalGenerator(sigma, matExp, minBorder, maxBorder, iterationNumber) {}

    ~InformationSource() {}

    double GenerateRequestTime() {return normalGenerator.GenerateValue();}
};

#endif // INFORMATIONSOURCE_H
