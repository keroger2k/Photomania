//
//  Photographer+Create.h
//  Photomania
//
//  Created by Kyle Rogers on 10/2/13.
//  Copyright (c) 2013 Kyle Rogers. All rights reserved.
//

#import "Photographer.h"

@interface Photographer (Create)

+ (Photographer *)photographerWithName:(NSString *)name
                inManagedObjectContext:(NSManagedObjectContext *)context;
@end
