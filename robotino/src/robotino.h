/***************************************************************************
 *  robotino.h - Main Plugin file for controlling the robotino model
 *
 *  Created: Mon Jul 29 17:33:31 2013
 *  Copyright  2013  Frederik Zwilling
 ****************************************************************************/

/*  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  Read the full text in the LICENSE.GPL file in the doc directory.
 */

#include <boost/bind.hpp>
#include <gazebo.hh>
#include <physics/physics.hh>
#include <common/common.hh>
#include <stdio.h>
#include <transport/transport.hh>
#include <list>
#include "simDevice.h"

namespace gazebo
{   
  class Robotino : public ModelPlugin
  {
  public:
    //Constructor
    Robotino();

    //Destructor
    ~Robotino();

    //Overridden ModelPlugin-Functions
    virtual void Load(physics::ModelPtr _parent, sdf::ElementPtr /*_sdf*/);
    virtual void OnUpdate(const common::UpdateInfo &);
    virtual void Reset();

  private:

    //simulated devices
    std::list<SimDevice*> devices_list_;

    // Pointer to the model
    physics::ModelPtr model_;
    // Pointer to the update event connection
    event::ConnectionPtr update_connection_;
    //Node for communication
    transport::NodePtr node_;
  };
}