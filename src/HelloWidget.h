#pragma once

#include <QtWidgets/QWidget>
#include <QtWidgets/QLabel>

class HelloWidget : public QWidget {
    Q_OBJECT

  public:
    explicit HelloWidget(QWidget *parent = nullptr);
    virtual ~HelloWidget() override;

    QLabel *m_labelInfo;
};
