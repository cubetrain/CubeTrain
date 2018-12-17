/**
 *  @file
 *  @copyright defined in seat/LICENSE.txt
 */

#include <cubetrain/chain/genesis_state.hpp>

// these are required to serialize a genesis_state
#include <fc/smart_ref_impl.hpp>   // required for gcc in release mode

namespace cubetrain { namespace chain {

genesis_state::genesis_state() {
   initial_timestamp = fc::time_point::from_iso_string( "2018-11-11T11:11:11" );
   initial_key = fc::variant(cubetrain_root_key).as<public_key_type>();
}

chain::chain_id_type genesis_state::compute_chain_id() const {
   digest_type::encoder enc;
   fc::raw::pack( enc, *this );
   return chain_id_type{enc.result()};
}

} } // namespace cubetrain::chain
