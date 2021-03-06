#ifndef PROPERTYSQRFTSTATS_H
#define PROPERTYSQRFTSTATS_H

#include <QString>
#include "mattcalculations.h"


class PropertySqrftStats
{
public:
    PropertySqrftStats();

    void enterAddress(QString addr);
    void enterMLSNumber(QString MLSNum);

    void enterPropertyPrice(QString strPrice);
    void enterFinAboveSqrFt(int nFinAboveSqrFt);
    void enterFinBelowSqrFt(int nFinBelowSqrFt);
    void enterPercentPriceBelow(double dFromSlider );
    void enterRatioAboveToBelowPricePerSqrFt(double dRatio);

    void enterLotSize(int nLotSizeAcers);
    void enterLandAssess(int nLandAssess);
    void enterTotalAssess(int nTotalAssess);
    void enterAdjustedPrice(int nAdjustedPrice);
    void enterRatioLandToTotal(double dRatioLandToTotal);
    void enterLotSizeAcres (double dLotSizeAcres);
    void enterPricePerAcres (double dPricePerAcre);
    void enterDaysOnMarket(int nDOM);



    QString getAddress();
    QString getMLSNumber();

    QString getPropertyPrice();
    QString getPriceTotAbove();
    QString getPriceTotBelow();

    int getFinAboveSqrFt();
    int getFinBelowSqrFt();

    QString getPricePerSqrFtTotal();
    QString getPricePerSqrFtAbove();
    QString getPricePerSqrFtBelow();

    QString getRatioAboveToBelowPricePerSqrFt();

    double getPercentPriceBelow();

    int getLandAssesses();

    QString getAdjustedPropertyPrice();
//    QString getAdjustedPriceTotAbove();
//    QString getAdjustedPriceTotBelow();
    QString getAdjustedPricePerSqrFtTotal();
    QString getAdjustedPricePerSqrFtAbove();
    QString getAdjustedPricePerSqrFtBelow();
    int getDaysOnMarket();

    PropertySqrftStats& operator= (const PropertySqrftStats &source);


private:

    QString m_strAddress;
    QString m_strMLSNumber;

    int m_nPropertyPrice;
    int m_nPriceTotAbove;
    int m_nPriceTotBelow;

    int m_nFinAboveSqrFt;
    int m_nFinBelowSqrFt;
    double m_dPricePerSqrFtTotal;
    double m_dPricePerSqrFtAbove;
    double m_dPricePerSqrFtBelow;

    double m_dPercentPriceBelow;
    double m_dRatioAboveToBelowPricePerSqrFt;


    int m_nLandAssess;
    int m_nTotalAssess;

    int m_nAdjustedPrice;
    double m_dRatioLandToTotal;
    double m_dLotSizeAcres;
    double m_dPricePerAcre;

    double m_dAdjustedPricePerSqrFtTotal;
    double m_dAdjustedPricePerSqrFtAbove;
    double m_dAdjustedPricePerSqrFtBelow;

    int m_nDaysOnMarket;

    void calcAdjustedPrice();
    void calcPricePerSqrFtTotal();
    void calcPricePerSqrFtBelow();
    void calcPricePerSqrFtAbove();
    void calcRatioAboveToBelowPricePerSqrFt();
    void calcPriceAbove();
    void calcPriceBelow();

    void calcAdjustedPricePerSqrFtTotal();
    void calcAdjustedPricePerSqrFtBelow();
    void calcAdjustedPricePerSqrFtAbove();

    void refreshData();

};

#endif // PROPERTYSQRFTSTATS_H
