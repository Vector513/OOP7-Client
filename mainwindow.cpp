#include "mainwindow.h"
#include <QDoubleValidator>
#include <QGroupBox>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("");
    setMinimumSize(400, 300);
    resize(600, 800);
    centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);
    mainLayout = new QVBoxLayout(centralWidget);
    centralWidget->setObjectName("centralWidget");

    applyStyles();    
}

MainWindow::~MainWindow() {}

void MainWindow::applyStyles()
{
    setStyleSheet("#centralWidget {"
                  "   background-color: #171717;"
                  "}"
                  "#centralWidget * {"
                  "   background-color: #222222;"
                  "   font-family: 'San Francisco'; font-size: 11pt; color: #CCCCCC;"
                  "}"
                  "#centralWidget QGroupBox {"
                  "   background-color: #222222;"
                  "   border: 1px solid #545454;"
                  "   border-radius: 10px;"
                  "   margin-top: 15px;"
                  "}"
                  "#centralWidget QGroupBox::title {"
                  "   color: #CCCCCC;"
                  "   background-color: #404248;"
                  "   padding: 1px;"
                  "   border: 1px solid #545454;"
                  "   border-radius: 5px;"
                  "   subcontrol-origin: margin;"
                  "   subcontrol-position: top left;"
                  "   margin-left: 10px;"
                  "   margin-top: 1px;"
                  "}"
                  "#centralWidget QPushButton {"
                  "   background-color: #464A54;"
                  "   color: #CCCCCC;"
                  "   border: 1px solid #545454;"
                  "   border-radius: 5px;"
                  "   padding: 3px;"
                  "}"
                  "#centralWidget QLineEdit, "
                  "#centralWidget QTextEdit {"
                  "   border: 1px solid #545454;"
                  "   background-color: #282828;"
                  "   color: #CCCCCC;"
                  "}"
                  "#centralWidget QRadioButton {"
                  "   background-color: transparent;"
                  "   color: #CCCCCC;"
                  //"   border: 1px solid #545454;"
                  //"   border-radius: 5px;"
                  "   padding: 3px;"
                  "}");
}

