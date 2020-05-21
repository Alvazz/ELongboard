/*
	Copyright 2012-2015 Benjamin Vedder	benjamin@vedder.se

	This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

/*
 * nrf_driver.h
 *
 *  Created on: 29 mar 2015
 *      Author: benjamin
 */

#ifndef NRF_NRF_DRIVER_H_
#define NRF_NRF_DRIVER_H_

#define COM_NRF_BRAKE 		(1 << 0)
#define COM_NRF_DUTY 		(1 << 1)
#define COM_NRF_CURR		(1 << 2)
#define COM_NRF_SPEED		(1 << 3)
#define COM_NRF_SMRT_SPEED	(1 << 4)

#define COM_NRF_OFF			(1 << 6)
#define COM_NRF_INV			(1 << 7)

#define NRF_RESTART_TIMEOUT		500  // Restart the NRF if nothing has been received or acked for this time

enum{
	STS_LOST=0,
	STS_CONN
};

// Functions
void nrf_driver_init(void);
void nrf_driver_send_buffer(unsigned char *data, unsigned int len);

int rf_tx_wrapper(uint8_t *data, uint32_t len);
void NRF_processIRQData();


#endif /* NRF_NRF_DRIVER_H_ */
