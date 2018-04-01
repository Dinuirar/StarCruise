#include "cweapons.h"
#include "common.h"

/////////////////////////////////////////////////////////////
CWeapons::CWeapons() { }

CWeapons::CWeapons(QString MODELNAME, int ENERGYCOST,
                   qreal X, qreal Y, qreal ANGLE,
                   qreal LINEAR_SPEED)
    : CInertion(X, Y, ANGLE, LINEAR_SPEED, 0),
      modelName(MODELNAME), energyCost(ENERGYCOST) {
    QImage tmp(modelName);
    setPixmap( QPixmap::fromImage( tmp ) );
    //setTransformOriginPoint( tmp.width()/2, 0 );
    setScale(0.2);
}

/////////////////////////////////////////////////////////////
CPlasma::CPlasma() { }

CPlasma::CPlasma(qreal X, qreal Y, qreal ANGLE,
                 qreal LINEAR_SPEED)
    : modelName(graphicspath + plasmaName),
      CWeapons(graphicspath + plasmaName, plasmaEnergyCost,
               X, Y, ANGLE, LINEAR_SPEED) { }

/////////////////////////////////////////////////////////////
CLaser::CLaser() {}

CLaser::CLaser(qreal X, qreal Y, qreal ANGLE,
                 qreal LINEAR_SPEED)
    : modelName(graphicspath + laserName),
      CWeapons(graphicspath + laserName, laserEnergyCost,
               X, Y, ANGLE, LINEAR_SPEED) { }

/////////////////////////////////////////////////////////////
CKinetic::CKinetic() {}

CKinetic::CKinetic(qreal X, qreal Y, qreal ANGLE,
                 qreal LINEAR_SPEED)
    : modelName(graphicspath + kineticName),
      CWeapons(graphicspath + kineticName, kineticEnergyCost,
               X, Y, ANGLE, LINEAR_SPEED) { }

/////////////////////////////////////////////////////////////