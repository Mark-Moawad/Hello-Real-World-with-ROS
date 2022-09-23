
"use strict";

let StorageUnit = require('./StorageUnit.js');
let PopulationState = require('./PopulationState.js');
let KitObject = require('./KitObject.js');
let VacuumGripperState = require('./VacuumGripperState.js');
let Kit = require('./Kit.js');
let ConveyorBeltState = require('./ConveyorBeltState.js');
let KitTray = require('./KitTray.js');
let LogicalCameraImage = require('./LogicalCameraImage.js');
let Order = require('./Order.js');
let DetectedObject = require('./DetectedObject.js');
let TrayContents = require('./TrayContents.js');
let Model = require('./Model.js');
let Proximity = require('./Proximity.js');

module.exports = {
  StorageUnit: StorageUnit,
  PopulationState: PopulationState,
  KitObject: KitObject,
  VacuumGripperState: VacuumGripperState,
  Kit: Kit,
  ConveyorBeltState: ConveyorBeltState,
  KitTray: KitTray,
  LogicalCameraImage: LogicalCameraImage,
  Order: Order,
  DetectedObject: DetectedObject,
  TrayContents: TrayContents,
  Model: Model,
  Proximity: Proximity,
};
