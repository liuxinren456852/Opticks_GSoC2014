/*
 * The information in this file is
 * Copyright(c) 2007 Ball Aerospace & Technologies Corporation
 * and is subject to the terms and conditions of the
 * GNU Lesser General Public License Version 2.1
 * The license text is available from   
 * http://www.gnu.org/licenses/lgpl.html
 */

#ifndef TUTORIAL1_H
#define TUTORIAL1_H


#include "Gui.h"
#include <QtCore/QObject>
#include "ViewerShell.h"
//#include "AlgorithmShell.h"

//class Tutorial1 :public QObject, public AlgorithmShell // algorithm shell gives problem with teh gui...
class Tutorial1 :public QObject, public ViewerShell 
{
	Q_OBJECT
public:
   Tutorial1();
   virtual ~Tutorial1();

   bool getInputSpecification(PlugInArgList*& pInArgList);
   bool getOutputSpecification(PlugInArgList*& pOutArgList);
   bool execute(PlugInArgList* pInArgList, PlugInArgList* pOutArgList);
   
   /*bool serialize(SessionItemSerializer& serializer) const;
   bool deserialize(SessionItemDeserializer& deserializer);*/
   bool showGui(PointCloudElement* pElement);
  

 protected slots: 
   void Tutorial1::dialogClosed();
 
protected:  
   QWidget* getWidget() const;

private:
  Tutorial1(const Tutorial1& rhs);
  Tutorial1& operator=(const Tutorial1& rhs);
  Gui* mpGui;

};

#endif
