@interface MovingAverage : NSObject

@property(nonatomic, readonly) double movingAverage;
@property(nonatomic, readonly) double cumulativeAverage;

- (instancetype)initWithPeriod:(NSUInteger)period;

- (void)addDatum:(NSNumber *)datum;

@end
