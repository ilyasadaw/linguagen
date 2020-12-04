#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCoreApplication>
#include <QDateTime>
#include <QString>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    firsttime = 1;
    for (int i = 0; i < 20; i++)
    {
        lit[i] = "A";
    }
    location = 0;
    ui->menuLbl->setGeometry(285, 50, 231, 71);
    ui->menuLing->setGeometry(350, 180, 111, 50);
    ui->menuCae->setGeometry(350, 250, 111, 50);
    ui->menuLit->setGeometry(350, 320, 111, 50);
    ui->menuQuit->setGeometry(365, 440, 70, 20);

    ui->caeInput->setVisible(false);
    ui->caeOutput->setVisible(false);
    ui->caeLbl->setVisible(false);
    ui->caeStep->setVisible(false);
    ui->caeZ->setVisible(false);
    ui->caeD->setVisible(false);
    ui->caeLbl2->setVisible(false);
    ui->lanInput->setVisible(false);
    ui->lanOutput->setVisible(false);

    ui->litRand->setVisible(false);
    ui->litZ->setVisible(false);
    ui->litD->setVisible(false);

    ui->lit_->setVisible(false);
    ui->lit_2->setVisible(false);
    ui->lit_3->setVisible(false);
    ui->lit_4->setVisible(false);
    ui->lit_5->setVisible(false);
    ui->lit_6->setVisible(false);
    ui->lit_7->setVisible(false);
    ui->lit_8->setVisible(false);
    ui->lit_9->setVisible(false);
    ui->lit_10->setVisible(false);
    ui->lit_11->setVisible(false);
    ui->lit_12->setVisible(false);
    ui->lit_13->setVisible(false);
    ui->lit_14->setVisible(false);
    ui->lit_15->setVisible(false);
    ui->lit_16->setVisible(false);
    ui->lit_17->setVisible(false);
    ui->lit_18->setVisible(false);
    ui->lit_19->setVisible(false);
    ui->lit_20->setVisible(false);

    ui->lit1->setVisible(false);
    ui->lit2->setVisible(false);
    ui->lit3->setVisible(false);
    ui->lit4->setVisible(false);
    ui->lit5->setVisible(false);
    ui->lit6->setVisible(false);
    ui->lit7->setVisible(false);
    ui->lit8->setVisible(false);
    ui->lit9->setVisible(false);
    ui->lit10->setVisible(false);
    ui->lit11->setVisible(false);
    ui->lit12->setVisible(false);
    ui->lit13->setVisible(false);
    ui->lit14->setVisible(false);
    ui->lit15->setVisible(false);
    ui->lit16->setVisible(false);
    ui->lit17->setVisible(false);
    ui->lit18->setVisible(false);
    ui->lit19->setVisible(false);
    ui->lit20->setVisible(false);

    ui->lan1->setVisible(false);
    ui->lan2->setVisible(false);
    ui->lan3->setVisible(false);
    ui->lan4->setVisible(false);
    ui->lan5->setVisible(false);
    ui->lan6->setVisible(false);
    ui->lan7->setVisible(false);

    ui->lan_1->setVisible(false);
    ui->lan_2->setVisible(false);
    ui->lan_3->setVisible(false);
    ui->lan_4->setVisible(false);
    ui->lan_5->setVisible(false);
    ui->lan_6->setVisible(false);
    ui->lan_7->setVisible(false);
    ui->lanNext->setVisible(false);
    ui->lanRand->setVisible(false);
    ui->lanLe->setVisible(false);
    ui->lanLe_2->setVisible(false);
    ui->lanAdd->setVisible(false);


    ui->caeInput->setGeometry(95, 70, 610, 180);
    ui->caeOutput->setGeometry(95, 350, 610, 180);

    ui->lanInput->setGeometry(95, 280, 610, 100);
    ui->lanOutput->setGeometry(95, 430, 610, 100);

    ui->caeLbl->setGeometry(95, 300, 31, 16);
    ui->caeStep->setGeometry(130, 300, 31, 16);
    ui->caeZ->setGeometry(614, 300, 91, 23);
    ui->caeD->setGeometry(513, 300, 91, 23);
    ui->caeLbl2->setGeometry(250, 25, 300, 30);

    ui->linDic->setGeometry(95, 300, 75, 25);
    ui->lanLe->setGeometry(220, 300, 113, 25);
    ui->lanLe_2->setGeometry(340, 300, 113, 25);
    ui->lanAdd->setGeometry(460, 300, 75, 25);

    ui->lan1->setGeometry(300, 60, 200, 40);
    ui->lan2->setGeometry(300, 130, 200, 40);
    ui->lan3->setGeometry(300, 200, 200, 40);
    ui->lan4->setGeometry(300, 270, 200, 40);
    ui->lan5->setGeometry(300, 340, 200, 40);
    ui->lan6->setGeometry(300, 410, 200, 40);
    ui->lan7->setGeometry(300, 490, 200, 40);

    ui->lan_1->setGeometry(380, 100, 40, 20);
    ui->lan_2->setGeometry(380, 170, 40, 20);
    ui->lan_3->setGeometry(380, 240, 40, 20);
    ui->lan_4->setGeometry(380, 310, 40, 20);
    ui->lan_5->setGeometry(380, 380, 40, 20);
    ui->lan_6->setGeometry(380, 450, 40, 20);
    ui->lan_7->setGeometry(380, 530, 40, 20);

    ui->lanNext->setGeometry(670, 20, 100, 25);
    ui->lanRand->setGeometry(670, 48, 100, 25);



    ui->litRand->setGeometry(513, 270, 192, 23);
    ui->litZ->setGeometry(614, 300, 91, 23);
    ui->litD->setGeometry(513, 300, 91, 23);

    ui->lit_->setGeometry(95, 280, 16, 16);
    ui->lit_2->setGeometry(111, 280, 16, 16);
    ui->lit_3->setGeometry(127, 280, 16, 16);
    ui->lit_4->setGeometry(143, 280, 16, 16);
    ui->lit_5->setGeometry(159, 280, 16, 16);
    ui->lit_6->setGeometry(175, 280, 16, 16);
    ui->lit_7->setGeometry(191, 280, 16, 16);
    ui->lit_8->setGeometry(207, 280, 16, 16);
    ui->lit_9->setGeometry(223, 280, 16, 16);
    ui->lit_10->setGeometry(239, 280, 16, 16);
    ui->lit_11->setGeometry(255, 280, 16, 16);
    ui->lit_12->setGeometry(271, 280, 16, 16);
    ui->lit_13->setGeometry(287, 280, 16, 16);
    ui->lit_14->setGeometry(303, 280, 16, 16);
    ui->lit_15->setGeometry(319, 280, 16, 16);
    ui->lit_16->setGeometry(335, 280, 16, 16);
    ui->lit_17->setGeometry(351, 280, 16, 16);
    ui->lit_18->setGeometry(367, 280, 16, 16);
    ui->lit_19->setGeometry(383, 280, 16, 16);
    ui->lit_20->setGeometry(399, 280, 16, 16);

    ui->lit1->setGeometry(95, 300, 16, 20);
    ui->lit2->setGeometry(111, 300, 16, 20);
    ui->lit3->setGeometry(127, 300, 16, 20);
    ui->lit4->setGeometry(143, 300, 16, 20);
    ui->lit5->setGeometry(159, 300, 16, 20);
    ui->lit6->setGeometry(175, 300, 16, 20);
    ui->lit7->setGeometry(191, 300, 16, 20);
    ui->lit8->setGeometry(207, 300, 16, 20);
    ui->lit9->setGeometry(223, 300, 16, 20);
    ui->lit10->setGeometry(239, 300, 16, 20);
    ui->lit11->setGeometry(255, 300, 16, 20);
    ui->lit12->setGeometry(271, 300, 16, 20);
    ui->lit13->setGeometry(287, 300, 16, 20);
    ui->lit14->setGeometry(303, 300, 16, 20);
    ui->lit15->setGeometry(319, 300, 16, 20);
    ui->lit16->setGeometry(335, 300, 16, 20);
    ui->lit17->setGeometry(351, 300, 16, 20);
    ui->lit18->setGeometry(367, 300, 16, 20);
    ui->lit19->setGeometry(383, 300, 16, 20);
    ui->lit20->setGeometry(399, 300, 16, 20);

    ui->btnBack->setVisible(false);
    ui->btnBack->setGeometry(365, 550, 70, 20);

    ui->linDic->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::exitLocation()
{
    ui->linDic->setVisible(false);
    ui->menuLbl->setVisible(false);
    ui->menuLing->setVisible(false);
    ui->menuCae->setVisible(false);
    ui->menuLit->setVisible(false);
    ui->menuQuit->setVisible(false);
    ui->caeInput->setVisible(false);
    ui->caeOutput->setVisible(false);
    ui->caeLbl->setVisible(false);
    ui->caeStep->setVisible(false);
    ui->caeZ->setVisible(false);
    ui->caeD->setVisible(false);
    ui->caeLbl2->setVisible(false);
    ui->litRand->setVisible(false);
    ui->litZ->setVisible(false);
    ui->litD->setVisible(false);
    ui->lit_->setVisible(false);
    ui->lit_2->setVisible(false);
    ui->lit_3->setVisible(false);
    ui->lit_4->setVisible(false);
    ui->lit_5->setVisible(false);
    ui->lit_6->setVisible(false);
    ui->lit_7->setVisible(false);
    ui->lit_8->setVisible(false);
    ui->lit_9->setVisible(false);
    ui->lit_10->setVisible(false);
    ui->lit_11->setVisible(false);
    ui->lit_12->setVisible(false);
    ui->lit_13->setVisible(false);
    ui->lit_14->setVisible(false);
    ui->lit_15->setVisible(false);
    ui->lit_16->setVisible(false);
    ui->lit_17->setVisible(false);
    ui->lit_18->setVisible(false);
    ui->lit_19->setVisible(false);
    ui->lit_20->setVisible(false);
    ui->lit1->setVisible(false);
    ui->lit2->setVisible(false);
    ui->lit3->setVisible(false);
    ui->lit4->setVisible(false);
    ui->lit5->setVisible(false);
    ui->lit6->setVisible(false);
    ui->lit7->setVisible(false);
    ui->lit8->setVisible(false);
    ui->lit9->setVisible(false);
    ui->lit10->setVisible(false);
    ui->lit11->setVisible(false);
    ui->lit12->setVisible(false);
    ui->lit13->setVisible(false);
    ui->lit14->setVisible(false);
    ui->lit15->setVisible(false);
    ui->lit16->setVisible(false);
    ui->lit17->setVisible(false);
    ui->lit18->setVisible(false);
    ui->lit19->setVisible(false);
    ui->lit20->setVisible(false);
    ui->lanInput->setVisible(false);
    ui->lanOutput->setVisible(false);
    ui->lan1->setVisible(false);
    ui->lan2->setVisible(false);
    ui->lan3->setVisible(false);
    ui->lan4->setVisible(false);
    ui->lan5->setVisible(false);
    ui->lan6->setVisible(false);
    ui->lan7->setVisible(false);
    ui->lan_1->setVisible(false);
    ui->lan_2->setVisible(false);
    ui->lan_3->setVisible(false);
    ui->lan_4->setVisible(false);
    ui->lan_5->setVisible(false);
    ui->lan_6->setVisible(false);
    ui->lan_7->setVisible(false);
    ui->lanNext->setVisible(false);
    ui->lanRand->setVisible(false);
    ui->lanLe->setVisible(false);
    ui->lanAdd->setVisible(false);
    ui->lanLe_2->setVisible(false);

    ui->caeInput->setText("");
    ui->caeOutput->setText("");
    ui->lanLe->setText("");
    ui->lanLe_2->setText("");
    ui->caeStep->setText("");
}

void MainWindow::goToLocation(int location)
{
    if (location == 0)
    {
        ui->menuLbl->setVisible(true);
        ui->menuLing->setVisible(true);
        ui->menuCae->setVisible(true);
        ui->menuLit->setVisible(true);
        ui->menuQuit->setVisible(true);
    }
    if (location == 1)
    {
        ui->caeLbl2->setText("Псевдоязык (только латиница)");
        ui->caeLbl2->setVisible(true);
        ui->btnBack->setVisible(true);
        if (firsttime)
        {
            stage = 1;
            ui->lanRand->setVisible(true);
            ui->lanNext->setVisible(true);
            ui->btnBack->setVisible(false);
            firsttime = 0;
            ui->caeLbl2->setText("Личные местоимения");
            ui->lan1->setVisible(true);
            ui->lan2->setVisible(true);
            ui->lan3->setVisible(true);
            ui->lan4->setVisible(true);
            ui->lan5->setVisible(true);
            ui->lan6->setVisible(true);
            ui->lan7->setVisible(true);

            ui->lan_1->setVisible(true);
            ui->lan_2->setVisible(true);
            ui->lan_3->setVisible(true);
            ui->lan_4->setVisible(true);
            ui->lan_5->setVisible(true);
            ui->lan_6->setVisible(true);
            ui->lan_7->setVisible(true);
        }
        else
        {
            ui->caeInput->setVisible(true);
            ui->caeOutput->setEnabled(false);
            ui->caeOutput->setVisible(true);
            ui->linDic->setVisible(true);
            ui->lanLe->setVisible(true);
            ui->lanAdd->setVisible(true);
            ui->lanLe_2->setVisible(true);
        }
    }
    if (location == 2)
    {
        ui->caeLbl2->setText("Шифр Цезаря (только латиница)");
        ui->caeInput->setVisible(true);
        ui->caeOutput->setVisible(true);
        ui->caeOutput->setEnabled(false);
        ui->caeLbl->setVisible(true);
        ui->caeStep->setVisible(true);
        ui->caeZ->setVisible(true);
        ui->caeD->setVisible(true);
        ui->caeLbl2->setVisible(true);

        ui->btnBack->setVisible(true);
    }
    if (location == 3)
    {
        ui->caeLbl2->setText("Литорея (только латиница)");
        ui->caeInput->setVisible(true);
        ui->caeOutput->setVisible(true);
        ui->caeOutput->setEnabled(false);
        ui->caeLbl2->setVisible(true);
        ui->litRand->setVisible(true);
        ui->litZ->setVisible(true);
        ui->litD->setVisible(true);

        ui->lit_->setVisible(true);
        ui->lit_2->setVisible(true);
        ui->lit_3->setVisible(true);
        ui->lit_4->setVisible(true);
        ui->lit_5->setVisible(true);
        ui->lit_6->setVisible(true);
        ui->lit_7->setVisible(true);
        ui->lit_8->setVisible(true);
        ui->lit_9->setVisible(true);
        ui->lit_10->setVisible(true);
        ui->lit_11->setVisible(true);
        ui->lit_12->setVisible(true);
        ui->lit_13->setVisible(true);
        ui->lit_14->setVisible(true);
        ui->lit_15->setVisible(true);
        ui->lit_16->setVisible(true);
        ui->lit_17->setVisible(true);
        ui->lit_18->setVisible(true);
        ui->lit_19->setVisible(true);
        ui->lit_20->setVisible(true);

        ui->lit1->setVisible(true);
        ui->lit2->setVisible(true);
        ui->lit3->setVisible(true);
        ui->lit4->setVisible(true);
        ui->lit5->setVisible(true);
        ui->lit6->setVisible(true);
        ui->lit7->setVisible(true);
        ui->lit8->setVisible(true);
        ui->lit9->setVisible(true);
        ui->lit10->setVisible(true);
        ui->lit11->setVisible(true);
        ui->lit12->setVisible(true);
        ui->lit13->setVisible(true);
        ui->lit14->setVisible(true);
        ui->lit15->setVisible(true);
        ui->lit16->setVisible(true);
        ui->lit17->setVisible(true);
        ui->lit18->setVisible(true);
        ui->lit19->setVisible(true);
        ui->lit20->setVisible(true);

        ui->btnBack->setVisible(true);
    }
}

void MainWindow::on_menuLing_clicked()
{
    exitLocation();
    location = 1;
    goToLocation(location);
}

void MainWindow::on_menuCae_clicked()
{
    exitLocation();
    location = 2;
    goToLocation(location);
}

void MainWindow::on_menuLit_clicked()
{
    exitLocation();
    location = 3;
    goToLocation(location);
}

void MainWindow::on_menuQuit_clicked()
{
    qApp->quit();
}

void MainWindow::on_caeZ_clicked()
{
    if (ui->caeStep->text().toInt() <= 0)
    {
        QMessageBox::warning(0,"Warning", "Шаг должен быть целым положительным числом");
    }
    else
    {
    ui->caeOutput->setEnabled(true);
    int a, b, c;
    QString source = ui->caeInput->toPlainText();
    b = ui->caeStep->text().toInt();
    if (b > 26)
    {
        b = b - (b / 26) * 26;
    }
    for (int i = 0; i < source.length(); i++)
    {
        if (source.at(i).isLetter())
        {
            c = b;
            a = source[i].toLatin1();
            if (a >= 65 && a <= 90)
            {
                if (a + c > 90)
                {
                    c = a + c - 26;
                }
                else
                {
                    c += a;
                }
            }
            else if (a >= 97 && a <= 122)
            {
                if (a + c > 122)
                {
                    c = a + c - 26;
                }
                else
                {
                    c += a;
                }
            }
            source[i] = (QChar)(c);
        }
    }
    ui->caeOutput->setText(source);
    }
}

void MainWindow::on_btnBack_clicked()
{
    ui->btnBack->setVisible(false);
    exitLocation();
    location = 0;
    goToLocation(location);
}

void MainWindow::on_caeD_clicked()
{
    if (ui->caeStep->text().toInt() <= 0)
    {
        QMessageBox::warning(0,"Warning", "Шаг должен быть целым положительным числом");
    }
    else
    {
    ui->caeOutput->setEnabled(true);
    int a, b, c;
    QString source = ui->caeInput->toPlainText();
    b = ui->caeStep->text().toInt();
    if (b > 26)
    {
        b = b - (b / 26) * 26;
    }
    for (int i = 0; i < source.length(); i++)
    {
        if (source.at(i).isLetter())
        {
            c = b;
            a = source[i].toLatin1();
            if (a >= 65 && a <= 90)
            {
                if (a - c < 65)
                {
                    c = 26 - c + a;
                }
                else
                {
                    c = a - c;
                }
            }
            else if (a >= 97 && a <= 122)
            {
                if (a - c < 97)
                {
                    c = 26 - c + a;
                }
                else
                {
                    c = a - c;
                }
            }
            source[i] = (QChar)(c);
        }
    }
    ui->caeOutput->setText(source);
    }
}

bool MainWindow::litCheck()
{
    for (int i = 0; i < 20; i++)
    {
        if (lit[i] == "A")
            return 0;
        for (int j = 0; j < 20; j++)
        {
            if (i != j && lit[i] == lit[j])
            {
                return 0;
            }
        }
    }
    return 1;
}

int MainWindow::getNumber(QChar a)
{
    /*if (a == 'B')
        return 0;
    if (a == 'C')
        return 1;
    if (a == 'D')
        return 2;
    if (a == 'F')
        return 3;
    if (a == 'G')
        return 4;
    if (a == 'H')
        return 5;
    if (a == 'J')
        return 6;
    if (a == 'K')
        return 7;
    if (a == 'L')
        return 8;
    if (a == 'M')
        return 9;
    if (a == 'N')
        return 10;
    if (a == 'P')
        return 11;
    if (a == 'Q')
        return 12;
    if (a == 'R')
        return 13;
    if (a == 'S')
        return 14;
    if (a == 'T')
        return 15;
    if (a == 'V')
        return 16;
    if (a == 'W')
        return 17;
    if (a == 'X')
        return 18;
    if (a == 'Z')
        return 19;
    return -1;*/
    for (int i = 0; i < 20; i++)
    {
        if (con[i][0] == a)
            return i;
    }
    return -1;
}

int MainWindow::getNumber1(QChar a)
{
    for (int i = 0; i < 20; i++)
    {
        if (lit[i][0] == a)
            return i;
    }
    return -1;
}

void MainWindow::on_litZ_clicked()
{
    if (litCheck())
    {
        QString source = ui->caeInput->toPlainText();
        bool upper;
        ui->caeOutput->setEnabled(true);
        int a;
        for (int i = 0; i < source.length(); i++)
        {
            if (source[i].isLetter())
            {
                upper = 0;
                if (source[i].isUpper())
                {
                    upper = 1;
                }
                source[i] = source[i].toUpper();
                a = getNumber(source[i]);
                if (a != -1)
                {
                    source[i] = lit[a][0];
                }
                if (!upper)
                {
                    source[i] = source[i].toLower();
                }
            }
        }
        ui->caeOutput->setText(source);
    }
    else
    {
        QMessageBox::warning(0,"Внимание", "Укажите отличающиеся друг от друга латинские согласные буквы");
    }
}

void MainWindow::on_litD_clicked()
{
    if (litCheck())
    {
        QString source = ui->caeInput->toPlainText();
        bool upper;
        ui->caeOutput->setEnabled(true);
        int a;
        for (int i = 0; i < source.length(); i++)
        {
            if (source[i].isLetter())
            {
                upper = 0;
                if (source[i].isUpper())
                {
                    upper = 1;
                }
                source[i] = source[i].toUpper();
                a = getNumber1(source[i]);
                if (a != -1)
                {
                    source[i] = con[a][0];
                }
                if (!upper)
                {
                    source[i] = source[i].toLower();
                }
            }
        }
        ui->caeOutput->setText(source);
    }
    else
    {
        QMessageBox::warning(0,"Warning", "Укажите отличающиеся друг от друга латинские согласные буквы");
    }
}

void MainWindow::on_litRand_clicked()
{
    int a, b[20];
    b[0] = -1;
    bool unique;
    for (int i = 0; i < 20; i++)
    {
        unique = 0;
        while (!unique)
        {
            a = qrand() % 20;
            unique = 1;
            for (int j = 0; j <= i; j++)
            {
                if (a == b[j])
                {
                    unique = 0;
                }
            }
        }
        b[i] = a;
        lit[i] = con[a];
    }
    ui->lit1->setText(lit[0]);
    ui->lit2->setText(lit[1]);
    ui->lit3->setText(lit[2]);
    ui->lit4->setText(lit[3]);
    ui->lit5->setText(lit[4]);
    ui->lit6->setText(lit[5]);
    ui->lit7->setText(lit[6]);
    ui->lit8->setText(lit[7]);
    ui->lit9->setText(lit[8]);
    ui->lit10->setText(lit[9]);
    ui->lit11->setText(lit[10]);
    ui->lit12->setText(lit[11]);
    ui->lit13->setText(lit[12]);
    ui->lit14->setText(lit[13]);
    ui->lit15->setText(lit[14]);
    ui->lit16->setText(lit[15]);
    ui->lit17->setText(lit[16]);
    ui->lit18->setText(lit[17]);
    ui->lit19->setText(lit[18]);
    ui->lit20->setText(lit[19]);
}

void MainWindow::addLit(QChar a, int x)
{
    a = a.toUpper();
    if (a == 'B' || a == 'C' || a == 'D' || a == 'F' || a == 'G' ||
            a == 'H' || a == 'J' || a == 'K' || a == 'L' || a == 'M' ||
            a == 'N' || a == 'P' || a == 'Q' || a == 'R' || a == 'S' ||
            a == 'T' || a == 'V' || a == 'W' || a == 'X' || a == 'Z')
    {
        lit[x] = a;
    }
}

void MainWindow::on_lit1_editingFinished()
{
    if (ui->lit1->text().size() > 0)
        addLit(ui->lit1->text().at(0), 0);
}

void MainWindow::on_lit10_editingFinished()
{
    if (ui->lit10->text().size() > 0)
        addLit(ui->lit10->text().at(0), 9);
}

void MainWindow::on_lit11_editingFinished()
{
    if (ui->lit11->text().size() > 0)
        addLit(ui->lit11->text().at(0), 10);
}

void MainWindow::on_lit12_editingFinished()
{
    if (ui->lit12->text().size() > 0)
        addLit(ui->lit12->text().at(0), 11);
}

void MainWindow::on_lit13_editingFinished()
{
    if (ui->lit13->text().size() > 0)
        addLit(ui->lit13->text().at(0), 12);
}

void MainWindow::on_lit14_editingFinished()
{
    if (ui->lit14->text().size() > 0)
        addLit(ui->lit14->text().at(0), 13);
}

void MainWindow::on_lit15_editingFinished()
{
    if (ui->lit15->text().size() > 0)
        addLit(ui->lit15->text().at(0), 14);
}

void MainWindow::on_lit16_editingFinished()
{
    if (ui->lit16->text().size() > 0)
        addLit(ui->lit16->text().at(0), 15);
}

void MainWindow::on_lit17_editingFinished()
{
    if (ui->lit17->text().size() > 0)
        addLit(ui->lit17->text().at(0), 16);
}

void MainWindow::on_lit18_editingFinished()
{
    if (ui->lit18->text().size() > 0)
        addLit(ui->lit18->text().at(0), 17);
}

void MainWindow::on_lit19_editingFinished()
{
    if (ui->lit19->text().size() > 0)
        addLit(ui->lit19->text().at(0), 18);
}

void MainWindow::on_lit2_editingFinished()
{
    if (ui->lit2->text().size() > 0)
        addLit(ui->lit2->text().at(0), 1);
}

void MainWindow::on_lit20_editingFinished()
{
    if (ui->lit20->text().size() > 0)
        addLit(ui->lit20->text().at(0), 19);
}

void MainWindow::on_lit3_editingFinished()
{
    if (ui->lit3->text().size() > 0)
        addLit(ui->lit3->text().at(0), 2);
}

void MainWindow::on_lit4_editingFinished()
{
    if (ui->lit4->text().size() > 0)
        addLit(ui->lit4->text().at(0), 3);
}

void MainWindow::on_lit5_editingFinished()
{
    if (ui->lit5->text().size() > 0)
        addLit(ui->lit5->text().at(0), 4);
}

void MainWindow::on_lit6_editingFinished()
{
    if (ui->lit6->text().size() > 0)
        addLit(ui->lit6->text().at(0), 5);
}

void MainWindow::on_lit7_editingFinished()
{
    if (ui->lit7->text().size() > 0)
        addLit(ui->lit7->text().at(0), 6);
}

void MainWindow::on_lit8_editingFinished()
{
    if (ui->lit8->text().size() > 0)
        addLit(ui->lit8->text().at(0), 7);
}

void MainWindow::on_lit9_editingFinished()
{
    if (ui->lit9->text().size() > 0)
        addLit(ui->lit9->text().at(0), 8);
}

void MainWindow::on_lan_1_editingFinished()
{
    ui->lan_1->setText(ui->lan_1->text().toLower());
    if (stage == 1) {
    i1 = ui->lan_1->text();
    }
    if (stage == 2)
    {
        in1 = ui->lan_1->text();
    }
}

void MainWindow::on_lan_2_editingFinished()
{
    ui->lan_2->setText(ui->lan_2->text().toLower());
    if (stage == 1)
    {
        we = ui->lan_2->text();
    }
    if (stage == 2)
    {
        on = ui->lan_2->text();
    }
}

void MainWindow::on_lan_3_editingFinished()
{
    ui->lan_3->setText(ui->lan_3->text().toLower());
    if (stage == 1) {
    you = ui->lan_3->text();
    }
    if (stage == 2)
    {
        under = ui->lan_3->text();
    }
}

void MainWindow::on_lan_4_editingFinished()
{
    ui->lan_4->setText(ui->lan_4->text().toLower());
    if (stage == 1) {
    youall = ui->lan_4->text();
    }
    if (stage == 2)
    {
        behind = ui->lan_4->text();
    }
}

void MainWindow::on_lan_5_editingFinished()
{
    ui->lan_5->setText(ui->lan_5->text().toLower());
    if (stage == 1) {
    they = ui->lan_5->text();
    }
    if (stage == 2)
    {
        before = ui->lan_5->text();
    }
}

void MainWindow::on_lan_6_editingFinished()
{
    ui->lan_6->setText(ui->lan_6->text().toLower());
    if (stage == 1) {
    he = ui->lan_6->text();
    }
    if (stage == 2)
    {
        from = ui->lan_6->text();
    }
}

void MainWindow::on_lan_7_editingFinished()
{
    ui->lan_7->setText(ui->lan_7->text().toLower());
    if (stage == 1) {
    she = ui->lan_7->text();
    }
    if (stage == 2)
    {
        with = ui->lan_7->text();
    }
}

bool MainWindow::pronounCheck()
{
    if (i1 == "" || we == "" || you == "" || youall == "" || they == "" || he == "" || she == "")
    {
        return 0;
    }
    return 1;
}

bool MainWindow::prepCheck()
{
    if (in1 == "" || on == "" || under == "" || behind == "" || before == "" || from == "" || with == "")
    {
        return 0;
    }
    return 1;
}

bool MainWindow::extraCheck()
{
    if (non == "" || and1 == "" || but == "" || be == "" || have == "" || past == "" || future == "")
    {
        return 0;
    }
    return 1;
}


void MainWindow::on_lanNext_clicked()
{
    if (stage == 1)
    {
        if (pronounCheck())
        {
            stage = 2;
            ui->caeLbl2->setText("Предлоги");
            ui->lan1->setText("В");
            ui->lan2->setText("НА");
            ui->lan3->setText("ПОД");
            ui->lan4->setText("ЗА");
            ui->lan5->setText("ДО");
            ui->lan6->setText("ИЗ");
            ui->lan7->setText("С");

            ui->lan_1->setText("");
            ui->lan_2->setText("");
            ui->lan_3->setText("");
            ui->lan_4->setText("");
            ui->lan_5->setText("");
            ui->lan_6->setText("");
            ui->lan_7->setText("");

        }
        else
        {
            QMessageBox::warning(0,"Внимание", "Остались незаполненные поля");
        }
    }
    else if (stage == 2)
    {
        if (prepCheck())
        {
            stage = 3;
            ui->caeLbl2->setText("Дополнительная информация");
            ui->lan1->setText("Отрицат. частица");
            ui->lan2->setText("Союз и");
            ui->lan3->setText("Союз но");
            ui->lan4->setText("Глагол быть/являться");
            ui->lan5->setText("Глагол иметь");
            ui->lan6->setText("Частица прош.вр");
            ui->lan7->setText("Частица буд.вр");

            ui->lan_1->setText("");
            ui->lan_2->setText("");
            ui->lan_3->setText("");
            ui->lan_4->setText("");
            ui->lan_5->setText("");
            ui->lan_6->setText("");
            ui->lan_7->setText("");

        }
        else
        {
            QMessageBox::warning(0,"Внимание", "Остались незаполненные поля");
        }

    }
    else if (stage == 3)
    {
        if (extraCheck())
        {
            stage = 4;
            exitLocation();
            goToLocation(location);
        }
        else
        {
            QMessageBox::warning(0,"Внимание", "Остались незаполненные поля");
        }
    }
}

QString MainWindow::generatePronoun(int k)
{
    int a, c, d;
    QString b;
    a = qrand() % k + 2;
    d = qrand() % a;
    for (int i = 0; i < a; i++)
    {
        c = qrand() % 20;
        if (i != d)
        {
            b[i] = con[c][0].toLower();
        }
    }
    c = qrand() % 6;
    b[d] = son[c][0].toLower();
    return b;
}

void MainWindow::on_lanRand_clicked()
{
    if (stage == 1) {
    i1 = generatePronoun(2);
    we = generatePronoun(2);
    you = generatePronoun(2);
    youall = generatePronoun(2);
    he = generatePronoun(2);
    she = generatePronoun(2);
    they = generatePronoun(2);

    ui->lan_1->setText(i1);
    ui->lan_2->setText(we);
    ui->lan_3->setText(you);
    ui->lan_4->setText(youall);
    ui->lan_5->setText(he);
    ui->lan_6->setText(she);
    ui->lan_7->setText(they);
    }
    if (stage == 2) {
        in1 = generatePronoun(2);
        on = generatePronoun(2);
        under = generatePronoun(2);
        behind = generatePronoun(2);
        before = generatePronoun(2);
        from = generatePronoun(2);
        with = generatePronoun(2);

        ui->lan_1->setText(in1);
        ui->lan_2->setText(on);
        ui->lan_3->setText(under);
        ui->lan_4->setText(behind);
        ui->lan_5->setText(before);
        ui->lan_6->setText(from);
        ui->lan_7->setText(with);
    }
    if (stage == 3) {
        non = generatePronoun(2);
        and1 = generatePronoun(2);
        but = generatePronoun(2);
        be = generatePronoun(5);
        have = generatePronoun(5);
        past = generatePronoun(2);
        future = generatePronoun(2);

        ui->lan_1->setText(non);
        ui->lan_2->setText(and1);
        ui->lan_3->setText(but);
        ui->lan_4->setText(be);
        ui->lan_5->setText(have);
        ui->lan_6->setText(past);
        ui->lan_7->setText(future);
    }
}

void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_linDic_clicked()
{
   QString a =
               "i - " + i1 + "\n"
               "we - " + we + "\n"
               "you - " + you + "\n"
               "you all - " + youall + "\n"
               "he - " + he + "\n"
               "she - " + she + "\n"
               "they - " + they + "\n"

               "in - " + in1 + "\n"
               "on - " + on + "\n"
               "under - " + under + "\n"
               "behind - " + behind + "\n"
               "before - " + before + "\n"
               "from - " + from + "\n"
               "with - " + with + "\n"

               "not - " + non + "\n"
               "and - " + and1 + "\n"
               "but - " + but + "\n"
               "to be - " + be + "\n"
               "to have - " + have + "\n"
               "didn't - " + past + "\n"
               "will - " + future + "\n";
   for (int i = 0; i < k; i++)
   {
        a = a + words[i] + "\n";
   }
   ui->caeInput->setText(a);
}

void MainWindow::on_lanAdd_clicked()
{
    if (ui->lanLe->text() != "" && ui->lanLe_2->text() != "")
    {
        words[k] = ui->lanLe->text() + " - " + ui->lanLe_2->text();
        k++;
    }
    ui->lanLe->setText("");
    ui->lanLe_2->setText("");
}
