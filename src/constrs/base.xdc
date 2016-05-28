## 200MHz System Clock
set_property PACKAGE_PIN F14 [ get_ports SYSCLK_N]
set_property IOSTANDARD LVDS [ get_ports SYSCLK_N]
set_property PACKAGE_PIN F15 [ get_ports SYSCLK_P]
set_property IOSTANDARD LVDS [ get_ports SYSCLK_P]

create_clock -add -name SYSCLK_P -period 5.00 -waveform {0 2.5} [get_ports SYSCLK_P]
