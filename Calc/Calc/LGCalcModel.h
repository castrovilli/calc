//
//  LGCalcModel.h
//  Calc
//
//  Created by Holger Liesegang on 14.01.14.
//  Copyright (c) 2014 Holger Liesegang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LGCalcModel : NSObject

// Contains the last operator
@property double stackDouble;

// Contains the last operation (+,-,*,/)
@property (nonatomic, strong) NSString* stackOperator;


- (double) performOperationWithNumber: (double) number_double;

@end
