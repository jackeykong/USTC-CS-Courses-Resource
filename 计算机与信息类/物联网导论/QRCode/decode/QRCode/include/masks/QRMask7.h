#ifndef QRMASK7_H
#define QRMASK7_H

#include <QRMask.h>


class QRMask7 : public QRMask
{
    public:
        QRMask7(int module_count, int module_width, Bitmap* bmp_mask);
        bool IsMaskCondition(int x, int y);
    protected:
    private:
};

#endif // QRMASK7_H
