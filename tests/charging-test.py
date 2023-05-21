import json
import pprint
import PySAM.BatteryStateful as battery

b = battery.default('LMOLTO')

b.value('control_mode', 1)

b.value('initial_SOC', 20)

b.value('minimum_SOC', 20)

b.value('maximum_SOC', 90)

b.value('input_power', 0)

# model.value('dt_hr', 1 / 60)  # Run the simulation for a one-minute timestep.

b.value('dt_hr', 1/60)  # Run simulation every minute

b.setup()

for i in range(50):

    b.Controls.input_power = -0.1

    b.execute(1)  # Execute the model.

    print(str(b.export()['StatePack']['P']) + ' Power')
    print(str(b.export()['StatePack']['SOC']) + ' SOC')
