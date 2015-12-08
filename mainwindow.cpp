#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <opencv2/opencv.hpp>


using namespace cv;
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Mat img = imread("/home/julien/Documents/UTBM/IN52/Projet/IN5X_project/image/Lenna.png", CV_LOAD_IMAGE_COLOR);
    Mat grayImg;
    cvtColor(img, grayImg, CV_BGR2GRAY);
    //cv::Canny(inputImage,100,200,300);
    //cv::threshold(img,out,127,255,cv::THRESH_BINARY);
    cv::imshow("Display Image", img);

    namedWindow( "Display window", CV_WINDOW_AUTOSIZE );
    imshow( "Display window", img );

    namedWindow( "Result window", CV_WINDOW_AUTOSIZE );
    imshow( "Result window", grayImg );
}

MainWindow::~MainWindow()
{
    delete ui;
}
