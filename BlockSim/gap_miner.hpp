//
//  gap_miner.hpp
//  BlockSim
//
//  Created by Harry Kalodner on 5/25/16.
//  Copyright © 2016 Harry Kalodner. All rights reserved.
//

#ifndef gap_miner_hpp
#define gap_miner_hpp

#include <memory>

class Strategy;

Strategy createGapStrategy(bool noSelfMining, bool noiseInTransactions);

#endif /* gap_miner_hpp */
