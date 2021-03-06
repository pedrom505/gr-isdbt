/* -*- c++ -*- */
/*  
 * Copyright 2015
 *   Federico "Larroca" La Rocca <flarroca@fing.edu.uy>
 *   Pablo Belzarena 
 *   Gabriel Gomez Sena 
 *   Pablo Flores Guridi 
 *  Victor Gonzalez Barbone
 *
 *  Instituto de Ingenieria Electrica, Facultad de Ingenieria,
 *  Universidad de la Republica, Uruguay.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_ISDBT_FREQUENCY_DEINTERLEAVER_1SEG_H
#define INCLUDED_ISDBT_FREQUENCY_DEINTERLEAVER_1SEG_H

#include <isdbt/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace isdbt {

    /*!
     * \brief Performs frequency de-interleaving, but is intended to be used
     * only for the 1-seg receiver (mostly to avoid unnecessary processing). 
     *
     * \ingroup isdbt
     *
     * This block thus only performs de-randomization. For a full-seg receiver 
     * please use the block frequency_deinterleaver. 
     *
     */
    class ISDBT_API frequency_deinterleaver_1seg : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<frequency_deinterleaver_1seg> sptr;

      /*!
       * \brief Performs frequency de-interleaving, but is intended to be used
       * only for the 1-seg receiver (mostly to avoid unnecessary processing).
       *
       * \param mode The transmission mode (either 1, 2 or 3). 
       */
      static sptr make(int mode);
    };

  } // namespace isdbt
} // namespace gr

#endif /* INCLUDED_ISDBT_FREQUENCY_DEINTERLEAVER_1SEG_H */

