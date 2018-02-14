//
// Copyright (C) 2013-2018 University of Amsterdam
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as
// published by the Free Software Foundation, either version 3 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public
// License along with this program.  If not, see
// <http://www.gnu.org/licenses/>.
//

#include "ribbonmachinelearning.h"
#include "ui_ribbonmachinelearning.h"

#include <QMenu>
///// additional Headers

RibbonMachineLearning::RibbonMachineLearning(QWidget *parent) :
	RibbonWidget(parent),
	ui(new Ui::RibbonMachineLearning)
{
	ui->setupUi(this);

	addRibbonButton(ui->regressionButton);
	addRibbonButton(ui->classificationButton);
	addRibbonButton(ui->clusteringButton);

	// If dataset is not needed
	// ui->regressionButton->setDataSetNotNeeded();
	// ui->classificationButton->setDataSetNotNeeded();
	// ui->clusteringButton->setDataSetNotNeeded();

	QMenu *menu;

	menu = new QMenu(this);
	menu->addAction(QString("Boosting"), this, SLOT(itemSelected()))->setObjectName("MLRegressionBoosting");
	menu->addAction(QString("k-Nearest neighbors"), this, SLOT(itemSelected()))->setObjectName("MLRegressionKNN");
	menu->addAction(QString("Random forest"), this, SLOT(itemSelected()))->setObjectName("MLRegressionRandomForest");

	ui->regressionButton->setMenu(menu);

	menu = new QMenu(this);
	menu->addAction(QString("Boosting"), this, SLOT(itemSelected()))->setObjectName("MLClassificationBoosting");
	menu->addAction(QString("k-Nearest neighbors"), this, SLOT(itemSelected()))->setObjectName("MLClassificationKNN");
	menu->addAction(QString("Random forest"), this, SLOT(itemSelected()))->setObjectName("MLClassificationRandomForest");

	ui->classificationButton->setMenu(menu);

	menu = new QMenu(this);
	menu->addAction(QString("k-Means"), this, SLOT(itemSelected()))->setObjectName("MLClusteringKMeans");
	menu->addAction(QString("Random forest"), this, SLOT(itemSelected()))->setObjectName("MLClusteringRandomForest");

	ui->clusteringButton->setMenu(menu);
}

RibbonMachineLearning::~RibbonMachineLearning()
{
	delete ui;
}
