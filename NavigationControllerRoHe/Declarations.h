//
//  Declarations.h
//  Web Services
//
//  Created by Walter Gonzalez Domenzain on 15/07/16.
//  Copyright © 2016 UAG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SBJson.h"
#import "ObjectMapper.h"
#import "ObjectResponse.h"
#import "Coord.h"
#import "MainObject.h"
#import "Parser.h"

//Debug
#define nDebugEnable        1
#define print(x)            if(nDebugEnable){(x);}

extern NSDictionary         *mjsonGeo;
@interface Declarations : NSObject

@end
