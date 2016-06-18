Uniforms
========

Each uniform (`CfgWeapons`) needs to have its own soldier (`CfgVehicles`),
linked via `uniformClass` in both.

The uniform defines inventory image, various properties and the model
and texture of the dropped item (on ground).
The soldier then defines texture(s) of the uniform on actual soldiers
and `model` to display the texture on.

`CfgWeapons`:
  `picture`: .paa icon in inventory (uniform slot), 64x64 / 128x128 / etc.
  `model`: .p3d "suitpack" model on the ground
  `hiddenSelectionsTextures[]`: .paa texture of the suitpack on ground
`CfgVehicles`:
  `hiddenSelectionsTextures[]`: .paa texture of the uniform on soldier
  `model:` .p3d model of the soldier, defines rolled up sleeves, shape, etc.

See
https://community.bistudio.com/wiki/Arma_3_Characters_And_Gear_Encoding_Guide#Uniform_configuration
