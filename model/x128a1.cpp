#include "x128a1.h"

namespace model {


const Device::ModelConf ATxmega128A1::MODEL_CONF = {
  .flash_size = 0x22000,
  .flash_page_size = 0x200,
  .flash_boot_size = 0x2000,
  .mem_eeprom_size = 0x0800,
  .mem_sram_size = 0x4000,
  .has_exsram = true,
};


ATxmega128A1::ATxmega128A1():
    Device(MODEL_CONF),
    portA_(this, block::instances::PORTA),
    portB_(this, block::instances::PORTB),
    portC_(this, block::instances::PORTC),
    portD_(this, block::instances::PORTD),
    portE_(this, block::instances::PORTE),
    portF_(this, block::instances::PORTF),
    portH_(this, block::instances::PORTH),
    portJ_(this, block::instances::PORTJ),
    portK_(this, block::instances::PORTK),
    portQ_(this, block::instances::PORTQ),
    portR_(this, block::instances::PORTR),
    usartC0_(this, block::instances::USARTC0),
    usartC1_(this, block::instances::USARTC1),
    usartD0_(this, block::instances::USARTD0),
    usartD1_(this, block::instances::USARTD1),
    usartE0_(this, block::instances::USARTE0),
    usartE1_(this, block::instances::USARTE1),
    usartF0_(this, block::instances::USARTF0),
    usartF1_(this, block::instances::USARTF1)
{
  connectBlock(&portA_);
  connectBlock(&portB_);
  connectBlock(&portC_);
  connectBlock(&portD_);
  connectBlock(&portE_);
  connectBlock(&portF_);
  connectBlock(&portH_);
  connectBlock(&portJ_);
  connectBlock(&portK_);
  connectBlock(&portQ_);
  connectBlock(&portR_);
  connectBlock(&usartC0_);
  connectBlock(&usartC1_);
  connectBlock(&usartD0_);
  connectBlock(&usartD1_);
  connectBlock(&usartE0_);
  connectBlock(&usartE1_);
  connectBlock(&usartF0_);
  connectBlock(&usartF1_);
}

ATxmega128A1::~ATxmega128A1()
{
}


}
