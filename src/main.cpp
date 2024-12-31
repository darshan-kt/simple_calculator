#include "operations.h"
#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QWidget>
#include <QString>


//This example just only show QT GUi feature for add function, in future you can add remaing functions
int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    QVBoxLayout layout;

    QLineEdit input1, input2, result;
    input1.setPlaceholderText("Enter first number");
    input2.setPlaceholderText("Enter second number");
    result.setReadOnly(true);

    QPushButton addButton("Add");
    QObject::connect(&addButton, &QPushButton::clicked, [&]() {
        double num1 = input1.text().toDouble();
        double num2 = input2.text().toDouble();
        result.setText(QString::number(add(num1, num2)));
    });

    layout.addWidget(&input1);
    layout.addWidget(&input2);
    layout.addWidget(&addButton);
    layout.addWidget(&result);

    window.setLayout(&layout);
    window.show();

    return app.exec();
}

