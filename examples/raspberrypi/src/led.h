#include RADL_HEADER

class Led {
 	public:
		Led();
  		void step(const radl_in_t*, const radl_in_flags_t*, radl_out_t*, radl_out_flags_t*);
};
