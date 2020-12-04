#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_menuLing_clicked();

    void on_menuCae_clicked();

    void on_menuLit_clicked();

    void on_menuQuit_clicked();

    void goToLocation(int);

    void exitLocation();

    void on_caeZ_clicked();

    void on_btnBack_clicked();

    void on_caeD_clicked();

    void on_litZ_clicked();

    void on_litD_clicked();

    void on_litRand_clicked();

    void on_lit1_editingFinished();

    void addLit(QChar, int);

    int getNumber(QChar);

    int getNumber1(QChar);

    void on_lit10_editingFinished();

    void on_lit11_editingFinished();

    void on_lit12_editingFinished();

    void on_lit13_editingFinished();

    void on_lit14_editingFinished();

    void on_lit15_editingFinished();

    void on_lit16_editingFinished();

    void on_lit17_editingFinished();

    void on_lit18_editingFinished();

    void on_lit19_editingFinished();

    void on_lit2_editingFinished();

    void on_lit20_editingFinished();

    void on_lit3_editingFinished();

    void on_lit4_editingFinished();

    void on_lit5_editingFinished();

    void on_lit6_editingFinished();

    void on_lit7_editingFinished();

    void on_lit8_editingFinished();

    void on_lit9_editingFinished();

    bool litCheck();

    void on_lan_1_editingFinished();

    void on_lan_2_editingFinished();

    void on_lan_3_editingFinished();

    void on_lan_4_editingFinished();

    void on_lan_5_editingFinished();

    void on_lan_6_editingFinished();

    void on_lan_7_editingFinished();

    void on_lanNext_clicked();

    bool pronounCheck();

    bool prepCheck();

    bool extraCheck();

    void on_lanRand_clicked();

    QString generatePronoun(int);

    void on_pushButton_clicked();

    void on_linDic_clicked();

    void on_lanAdd_clicked();

private:
    Ui::MainWindow *ui;
    int location, stage, k = 0;
    QString lit[20], con[20] = {"B", "C", "D", "F", "G", "H", "J", "K", "L", "M", "N", "P", "Q", "R", "S", "T", "V", "W", "X", "Z"}, son[6] = {"A", "E", "I", "O", "U", "Y"},
    i1 = "", you = "", youall = "", we = "", they = "", he = "", she = "",
    in1 = "", on = "", under = "", behind = "", before = "", from = "", with = "",
    non = "", and1 = "", but = "", be = "", have = "", past = "", future = "",
    words[1000];
    bool firsttime;
};
#endif // MAINWINDOW_H
