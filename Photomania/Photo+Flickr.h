//
//  Photo+Flickr.h
//  Photomania
//
//  Created by Kyle Rogers on 10/2/13.
//  Copyright (c) 2013 Kyle Rogers. All rights reserved.
//

#import "Photo.h"

@interface Photo (Flickr)
+ (Photo *)photoWithFlickrInfo:(NSDictionary *)photoDictionary
        inManagedObjectContext:(NSManagedObjectContext *)context;

@end
