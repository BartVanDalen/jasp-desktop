//
// Copyright (C) 2018 University of Amsterdam
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

#include "summarystatsttestbayesianindependentsamplesform.h"
#include "ui_summarystatsttestbayesianindependentsamplesform.h"

SummaryStatsTTestBayesianIndependentSamplesForm::SummaryStatsTTestBayesianIndependentSamplesForm(QWidget *parent) :
	AnalysisForm("SummaryStatsTTestBayesianIndependentSamplesForm", parent),
	ui(new Ui::SummaryStatsTTestBayesianIndependentSamplesForm)
{
	ui->setupUi(this);

    // collapse more advanced options widget by default
    ui->subjectivePriors->hide();
}

SummaryStatsTTestBayesianIndependentSamplesForm::~SummaryStatsTTestBayesianIndependentSamplesForm()
{
	delete ui;
}
