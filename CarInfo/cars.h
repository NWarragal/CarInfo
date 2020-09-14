#ifndef CARS_H
#define CARS_H
#include "mainwindow.h"
#include <QFile>
#include <iostream>
#include <QString>
#include <QtCore>
#include <QMessageBox>
#include <QTextStream>
#include <QList>

struct Car
{
     QString brand; //марка
     QString model; //модель
     QString modification; //модификация
     QString country; //страна производитель
     QString type_body; //тип кузова
     QString engine; //тип двигателя
     QString capacity; //обьем
     QString locate_cyl; //положение цилиндров
     QString power; //мощность
     QString torque; //крутящий момент
     QString length; //длина
     QString width; //ширина
     QString height; //высота
     QString wheelbase; //колесная база
     QString dynamic0to100; //разгон до сотни
     QString fuel_consupt; //расход топлива
};

class file{
private:
    QVector<Car> cars_; //переменная для хранения считанного файла
public:
    file() //конструктор по умолчанию
    {}
    ~file() //деструктор
    {}

    void ReadFile(){     //чтение из файла
        Car line;        //переменная, в которую идет запись элемента структуры
        QString filename = "D:\\Qt\\Projects\\CarInfo\\data.txt"; //адрес файла
        QFile file( filename );
        if ( file.open(QIODevice::ReadOnly) ) //открытие файла; проверка на открытие
        {
            QTextStream stream( &file );
            while(!stream.atEnd()){
                stream >> line.brand >> endl; //запись элементов структуры
                stream >> line.model >> endl;
                stream >> line.modification  >> endl;
                stream >> line.country  >> endl;
                stream >> line.type_body  >> endl;
                stream >> line.engine  >> endl;
                stream >> line.capacity  >> endl;
                stream >> line.locate_cyl  >> endl;
                stream >> line.power  >> endl;
                stream >> line.torque  >> endl;
                stream >> line.length  >> endl;
                stream >> line.width  >> endl;
                stream >> line.height  >> endl;
                stream >> line.wheelbase  >> endl;
                stream >> line.dynamic0to100  >> endl;
                stream >> line.fuel_consupt  >> endl;
                cars_.push_back(line); //запись массива структур в вектор
            }
            file.close(); //закрытие файла
        }
    }

    void WriteFile(Car &line){ //запись элемента структуры в файл
        QString filename = "D:\\Qt\\Projects\\CarInfo\\data.txt";
        QFile file( filename );
        if ( file.open(QIODevice::Append) ) //открытие файла; проверка на открытие
        {
            QTextStream stream( &file );
            stream << " " + line.brand + " " << endl; //запись элементов структуры в файл
            stream << line.model + " " << endl;
            stream << line.modification + " " << endl;
            stream << line.country + " " << endl;
            stream << line.type_body + " " << endl;
            stream << line.engine + " " << endl;
            stream << line.capacity + " " << endl;
            stream << line.locate_cyl + " " << endl;
            stream << line.power + " " << endl;
            stream << line.torque + " " << endl;
            stream << line.length + " " << endl;
            stream << line.width + " " << endl;
            stream << line.height + " " << endl;
            stream << line.wheelbase + " " << endl;
            stream << line.dynamic0to100 + " " << endl;
            stream << line.fuel_consupt;
            file.close(); //закрытие файла
        }
    }

    QVector<QString> SortAndDel(QVector<QString> T){ //метод сортировки и удаления дублирующихся элеметов
        int j = 0;
        for(auto a: T) j++; //запись в переменную количества элементов структуры
        for(int y = 0; y < j; y++){
        for(int i = 0; i < j - 1; i++){
            for(int g = 0; g < j - i - 1; g++){
                 if(QString::compare(T[g], T[g + 1]) > 0){
                 QString c = T[g];                        //сортировка по алфафиту
                 T[g] = T[g + 1];
                 T[g + 1] = c;
                 }
             }
        }
            for(int i = j - 2; i > -1; i--){   //удаление дублирующихся элементов
                if(T[i] == T[i + 1]){
                     T.remove(i + 1);
                     i--;
                     j--;
                }
            }
        }
             return T;
    }

    QVector<QString> FindBrand(){ //метод выписывания марок автомобилей из вектора
       ReadFile(); //чтение информации из файла
       QVector<QString> brands; //переменная для записи
       for(int i = 0; i < cars_.size(); i++){
           brands.push_back(cars_.at(i).brand); //запись марки каждого автомобиля
       }
       return SortAndDel(brands); //вызов сортировки и удаления дубликатов
    }

    QVector<QString> FindModel(QString brand1){ //метод выписывания моделей автомобилей из вектора
       QVector<QString> models; //переменная для записи
       for(int k = 0; k < cars_.size(); k++){
           if(QString::compare(cars_.at(k).brand, brand1) == 0){ //проверка на соответсвие выбранной марке
           models.push_back(cars_.at(k).model); //запись модели подходящего автомобиля
           }
       }
       return SortAndDel(models); //вызов сортировки и удаления дубликатов
    }

    QVector<QString> FindModification(QString model1){ //метод выписывания модификаций автомобилей из вектора
        QVector<QString> modifications; //переменная для записи
        for(int i = 0; i < cars_.size(); i++){
            if(QString::compare(cars_.at(i).model, model1) == 0){ //проверка на соответсвие выбранной модели
                 modifications.push_back(cars_.at(i).modification); //запись модификации подходящего автомобиля
            }
        }
         return SortAndDel(modifications); //вызов сортировки и удаления дубликатов

    }

    Car SendInformation(QString brand1, QString model1, QString modification1){ //метод поиска необходимой структуры
        ReadFile(); //чтение из файла
        for(int k = 0; k < cars_.size(); k++){
            if(QString::compare(cars_.at(k).brand, brand1) == 0 && QString::compare(cars_.at(k).model, model1) == 0
                    && QString::compare(cars_.at(k).modification, modification1) == 0){ //поиск характеристик
                return cars_.at(k);                                                     //по заданным параметрам
            }
        }
        return cars_.at(0);
    }
};


#endif // CARS_H
