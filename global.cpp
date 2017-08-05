#include "Global.h"

static int invalid = -999;

Global::Global()
{
  mPropertyId = invalid;
  mYear = invalid;
  mEtvNumber = invalid;
}

Global::~Global()
{
}

Global* Global::getInstance()
{
  static Global theInstance;
  return &theInstance;
}

int Global::getCurrentPropertyId ()
{
  if (mPropertyId == invalid)
      qDebug() << "mPropertyId is not valid";

  return mPropertyId;
}

void Global::setCurrentPropertyId (int aId)
{
  mPropertyId = aId;
  qDebug() << "current property id: " << mPropertyId;
}

void Global::setCurrentEtvNumber (int aNumber)
{
  mEtvNumber = aNumber;
  qDebug() << "current etv number: " << mEtvNumber;
}

int Global::getCurrentEtvNumber ()
{
  if (mEtvNumber == invalid)
      qDebug() << "mEtvNumber is not valid";

  return mEtvNumber;
}

int Global::getCurrentYear ()
{
  if (mYear == invalid)
      qDebug() << "mYear is not valid";

  return mYear;
}

void Global::setCurrentYear (int aYear)
{
  mYear = aYear;
  qDebug() << "current year: " << mYear;
}
