#ifndef TABLE_H
#define TABLE_H

#include <QString>
#include <QStandardItemModel>
#include <QStandardItem>

#include "GlobalDefinitions.h"

#define DISPLAY_MODES_COUNT 3

class Table
{
private:
    QString name;
    int coordX[DISPLAY_MODES_COUNT];
    int coordY[DISPLAY_MODES_COUNT];
    int tableWidth[DISPLAY_MODES_COUNT];
    int tableHeight[DISPLAY_MODES_COUNT];

    QStandardItemModel* fieldsModel = nullptr;
    QStandardItemModel* objectsModel = nullptr;

public:
    explicit Table();
    ~Table();

    QString getName();
    int getCoordX(DisplayMode mode);
    int getCoordY(DisplayMode mode);
    int getWidth(DisplayMode mode);
    int getHeight(DisplayMode mode);
    QRect getGeometry(DisplayMode mode);
    QStandardItemModel *getFieldsModel();
    QStandardItemModel *getObjectsModel();

    void setName(const QString &name);

    void setCoord(int x, int y, DisplayMode mode);
    void resize(int w, int h, DisplayMode mode);

    void setCoordX(int x, DisplayMode mode);
    void setCoordY(int y, DisplayMode mode);
    void setWidth(int w, DisplayMode mode);
    void setHeight(int h, DisplayMode mode);
    void setGeometry(const QRect &rect, DisplayMode mode);

    void setObjectsModel(QStandardItemModel* im);
    void setFieldsModel(QStandardItemModel* im);
};

#endif // TABLE_H