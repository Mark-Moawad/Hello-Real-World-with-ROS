
"use strict";

let ConveyorBeltControl = require('./ConveyorBeltControl.js')
let SubmitTray = require('./SubmitTray.js')
let PopulationControl = require('./PopulationControl.js')
let GetMaterialLocations = require('./GetMaterialLocations.js')
let VacuumGripperControl = require('./VacuumGripperControl.js')
let AGVControl = require('./AGVControl.js')

module.exports = {
  ConveyorBeltControl: ConveyorBeltControl,
  SubmitTray: SubmitTray,
  PopulationControl: PopulationControl,
  GetMaterialLocations: GetMaterialLocations,
  VacuumGripperControl: VacuumGripperControl,
  AGVControl: AGVControl,
};
