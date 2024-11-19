#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
<<<<<<< HEAD
#include<QLabel>
=======
#include <QStack>
#include<QKeyEvent>
#include<QMap>
#include<QPushButton>
>>>>>>> 6a80993a50de46bcb2d5a515237c25b2cd4d74ee
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
<<<<<<< HEAD

private slots:
    void on_actionAbout_triggered();

    void on_actionFind_triggered();

    void on_actionReplace_triggered();

    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSaveAs_triggered();

    void on_textEdit_textChanged();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionCopy_triggered();

    void on_actionCut_triggered();

    void on_actionPaste_triggered();

    void on_textEdit_copyAvailable(bool b);

    void on_textEdit_undoAvailable(bool b);

    void on_textEdit_redoAvailable(bool b);

    void on_actionLineWrap_triggered();

    void on_actionFontcolor_triggered();

    void on_actionFontbackgroundcolor_triggered();

    void on_actionEditbackgroundcolor_triggered();

    void on_actionFont_triggered();

    void on_actionToolBar_triggered();

    void on_actionStatusBar_triggered();

    void on_actionExit_triggered();

    void on_actionSelectAll_triggered();

    void on_textEdit_cursorPositionChanged();

    void on_actionShowLineNumber_triggered();

    void on_actionShowLineNumber_triggered(bool checked);

private:
    Ui::MainWindow *ui;
    QLabel statusCursorLabel;
    QLabel statusLabel;
    QString filepath;
    bool textchange;
    bool userEditconfirm();
=======
    QString operand;
    QString opcode;
    QStack<QString> operands;
    QStack<QString> opcodes;
    QMap<int,QPushButton*> digitBTNs;
    QMap<int,QPushButton*> digitBinarys;
    QMap<int,QPushButton*> digitUnBinarys;
    QMap<int,QPushButton*> digitElse;
    QString calculation(bool *ok=NULL);

private slots:
    void btnNumClicked();
    void btnBinaryOperatorClicked();
    void btnUnaryOperatorClicked();

    void on_btnDian_clicked();

    void on_btnDelete_clicked();

    void on_btnC_clicked();

    void on_btnAll_clicked();

    void on_btnCE_clicked();

    virtual void keyPressEvent(QKeyEvent *event);

    void on_btnAddSub_clicked();

private:
    Ui::MainWindow *ui;
>>>>>>> 6a80993a50de46bcb2d5a515237c25b2cd4d74ee
};
#endif // MAINWINDOW_H
