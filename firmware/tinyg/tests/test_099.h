/* 
 * test_099.h - Arbitrary test file for debugging
 */
/*
N65 Y21.74Z-0.50\n\
N66 Y21.64Z-0.49\n\
N67 Y21.54Z-0.50\n\
N68 Y21.44Z-0.51\n\
N69 Y21.34Z-0.54\n\
N70 Y21.26Z-0.57\n\
N71 Y21.24Z-0.57\n\
N72 Y21.14Z-0.55\n\
N73 Y21.04Z-0.55\n\
N74 Y20.94Z-0.56\n\
N75 Y20.81Z-0.58\n\
N76 Y20.71Z-0.59\n\
N77 Y20.59Z-0.55\n\
N78 Y20.41Z-0.52\n\
N79 Y20.31Z-0.51\n\
N80 Y20.16Z-0.52\n\
N81 Y20.09Z-0.54\n\
N82 Y20.01Z-0.50\n\
N83 Y19.96Z-0.47\n\
N84 Y19.91Z-0.41\n\
N85 Y19.84Z-0.33\n\
N86 Y19.76Z-0.27\n\
N87 Y19.66Z-0.21\n\
N88 Y19.54Z-0.13\n\
N89 Y19.44Z-0.08\n\
N90 Y19.34Z-0.05\n\
N91 Y19.24Z-0.03\n\
N92 Y19.06Z-0.01\n\
N93 Y18.94Z-0.00\n\
N94 Y18.81Z-0.01\n\
N95 Y18.59Z-0.06\n\
N96 Y18.49Z-0.10\n\
N97 Y18.39Z-0.14\n\
N98 Y18.36Z-0.15\n\
N99 Y18.21Z-0.15\n\
N100 Y18.14Z-0.15\n\
N101 Y18.04Z-0.13\n\
N102 Y17.89Z-0.08\n\
N103 Y17.79Z-0.06\n\
N104 Y17.69Z-0.06\n\
N105 Y17.59Z-0.06\n\
N106 Y17.46Z-0.08\n\
N107 Y17.36Z-0.12\n\
N108 Y17.26Z-0.16\n\
N109 Y17.19Z-0.21\n\
N110 Y17.09Z-0.29\n\
N111 Y17.01Z-0.37\n\
N112 Y16.96Z-0.43\n\
N113 Y16.94Z-0.45\n\
N114 Y16.91Z-0.46\n\
N115 Y16.79Z-0.48\n\
N116 Y16.66Z-0.52\n\
N117 Y16.56Z-0.56\n\
N118 Y16.54Z-0.56\n\
N119 Y16.44Z-0.54\n\
N120 Y16.34Z-0.53\n\
N121 Y16.24Z-0.53\n\
N122 Y16.14Z-0.55\n\
N123 Y16.04Z-0.58\n\
N124 Y15.94Z-0.63\n\
N125 Y15.86Z-0.68\n\
N126 Y15.79Z-0.74\n\
N127 Y15.71Z-0.79\n\
N128 Y15.64Z-0.86\n\
N129 Y15.56Z-0.94\n\
N130 Y15.54Z-0.97\n\
N131 Y15.51Z-1.00\n\
N132 Y15.49Z-0.99\n\
N133 Y15.46Z-0.93\n\
N134 Y15.41Z-0.85\n\
N135 Y15.34Z-0.75\n\
N136 Y15.19Z-0.58\n\
N137 Y15.11Z-0.51\n\
N138 Y15.04Z-0.46\n\
N139 Y14.94Z-0.41\n\
N140 Y14.84Z-0.37\n\
N141 Y14.74Z-0.35\n\
N142 Y14.64Z-0.34\n\
N143 Y14.54Z-0.35\n\
N144 Y14.44Z-0.37\n\


*/
// Shortened numbered moon - skip to line 65, N4 adjusted for startup
const char test_99[] PROGMEM = "\
N0 (G28.2 x0y0z0)\n\
N1 G17\n\
N2 (G61)\n\
N3 G0Z0.0\n\
N4 (G0X0.00Y0.00)\n\
N4 G92 X0.00 Y14\n\
N5 (S1600M3)\n\
N6 (G4P3)\n\
N145 Y14.36Z-0.39\n\
N146 Y14.26Z-0.38\n\
N147 Y14.06Z-0.40\n\
N148 Y13.96Z-0.42\n\
N149 Y13.79Z-0.48\n\
N150 Y13.64Z-0.55\n\
N151 Y13.54Z-0.54\n\
N152 Y13.44Z-0.54\n\
N153 Y13.31Z-0.57\n\
N154 Y13.29Z-0.57\n\
N155 Y13.16Z-0.58\n\
N156 Y13.09Z-0.59\n\
N157 Y12.99Z-0.61\n\
N158 Y12.89Z-0.63\n\
N159 Y12.79Z-0.67\n\
N160 Y12.71Z-0.71\n\
N161 Y12.66Z-0.75\n\
N162 Y12.59Z-0.77\n\
N163 Y12.49Z-0.79\n\
N164 Y12.39Z-0.82\n\
N165 Y12.29Z-0.87\n\
N166 Y12.14Z-0.95\n\
N167 Y12.06Z-1.01\n\
N168 Y12.04Z-1.02\n\
N169 Y11.94Z-1.02\n\
N170 Y11.79Z-1.02\n\
N171 Y11.64Z-1.03\n\
N172 Y11.56Z-1.04\n\
N173 Y11.46Z-1.03\n\
N174 Y11.34Z-1.03\n\
N175 Y11.24Z-1.05\n\
N176 Y11.14Z-1.08\n\
N177 Y11.06Z-1.11\n\
N178 Y10.99Z-1.15\n\
N179 Y10.89Z-1.11\n\
N180 Y10.86Z-1.10\n\
N181 Y10.84Z-1.09\n\
N182 Y10.76Z-1.00\n\
N183 Y10.69Z-0.94\n\
N184 Y10.59Z-0.87\n\
N185 Y10.46Z-0.80\n\
N186 Y10.36Z-0.76\n\
N187 Y10.26Z-0.74\n\
N188 Y10.14Z-0.73\n\
N189 Y10.11Z-0.73\n\
N190 Y10.01Z-0.69\n\
N191 Y9.91Z-0.66\n\
N192 Y9.76Z-0.64\n\
N193 Y9.74Z-0.63\n\
N194 Y9.64Z-0.58\n\
N195 Y9.54Z-0.54\n\
N196 Y9.44Z-0.51\n\
N197 Y9.34Z-0.49\n\
N198 Y9.24Z-0.49\n\
N199 Y9.14Z-0.50\n\
N200 Y9.04Z-0.53\n\
N201 Y8.99Z-0.54\n\
N202 Y8.86Z-0.53\n\
N203 Y8.74Z-0.54\n\
N204 Y8.64Z-0.57\n\
N205 Y8.54Z-0.60\n\
N206 Y8.44Z-0.64\n\
N207 Y8.41Z-0.66\n\
N208 Y8.34Z-0.66\n\
N209 Y8.24Z-0.66\n\
N210 Y8.14Z-0.62\n\
N211 Y8.04Z-0.60\n\
N212 Y7.91Z-0.58\n\
N213 Y7.81Z-0.58\n\
N214 Y7.76Z-0.59\n\
N215 Y7.64Z-0.52\n\
N216 Y7.54Z-0.49\n\
N217 Y7.44Z-0.47\n\
N218 Y7.34Z-0.47\n\
N219 Y7.24Z-0.47\n\
N220 Y7.14Z-0.50\n\
N221 Y7.04Z-0.53\n\
N222 Y6.96Z-0.56\n\
N223 Y6.86Z-0.57\n\
N224 Y6.74Z-0.61\n\
N225 Y6.71Z-0.60\n\
N226 Y6.59Z-0.57\n\
N227 Y6.46Z-0.55\n\
N228 Y6.39Z-0.55\n\
N229 Y6.26Z-0.50\n\
N230 Y6.14Z-0.39\n\
N231 Y6.04Z-0.31\n\
N232 Y5.96Z-0.27\n\
N233 Y5.86Z-0.22\n\
N234 Y5.76Z-0.19\n\
N235 Y5.66Z-0.17\n\
N236 Y5.54Z-0.16\n\
N237 Y5.49Z-0.16\n\
N238 Y5.39Z-0.14\n\
N239 Y5.29Z-0.14\n\
N240 Y5.09Z-0.15\n\
N241 Y4.99Z-0.16\n\
N242 Y4.89Z-0.20\n\
N243 Y4.74Z-0.27\n\
N244 Y4.64Z-0.29\n\
N245 Y4.54Z-0.32\n\
N246 Y4.49Z-0.34\n\
N247 Y4.36Z-0.35\n\
N248 Y4.34Z-0.35\n\
N249 Y4.24Z-0.31\n\
N250 Y4.14Z-0.29\n\
N251 Y4.04Z-0.28\n\
N252 Y3.94Z-0.24\n\
N253 Y3.84Z-0.21\n\
N254 Y3.74Z-0.20\n\
N255 Y3.64Z-0.19\n\
N256 Y3.54Z-0.20\n\
N257 Y3.41Z-0.24\n\
N258 Y3.31Z-0.27\n\
N259 Y3.24Z-0.32\n\
N260 Y3.16Z-0.37\n\
N261 Y3.04Z-0.48\n\
N262 Y2.96Z-0.57\n\
N263 Y2.91Z-0.64\n\
N264 Y2.86Z-0.74\n\
N265 Y2.84Z-0.79\n\
N266 Y2.79Z-0.84\n\
N267 Y2.76Z-0.84\n\
N268 Y2.74Z-0.82\n\
N269 Y2.69Z-0.73\n\
N270 Y2.64Z-0.63\n\
N271 Y2.56Z-0.51\n\
N272 Y2.49Z-0.42\n\
N273 Y2.41Z-0.36\n\
N274 Y2.31Z-0.28\n\
N275 Y2.21Z-0.23\n\
N276 Y2.11Z-0.19\n\
N277 Y2.01Z-0.17\n\
N278 Y1.91Z-0.16\n\
N279 Y1.81Z-0.16\n\
N280 Y1.71Z-0.17\n\
N281 Y1.61Z-0.20\n\
N282 Y1.51Z-0.24\n\
N283 Y1.46Z-0.27\n\
N284 Y1.29Z-0.28\n\
N285 Y1.19Z-0.29\n\
N286 Y1.04Z-0.34\n\
N287 Y0.94Z-0.38\n\
N288 Y0.86Z-0.42\n\
N289 Y0.81Z-0.46\n\
N290 Y0.79Z-0.47\n\
N291 Y0.69Z-0.46\n\
N292 Y0.66Z-0.46\n\
N293 Y0.61Z-0.45\n\
N294 Y0.51Z-0.42\n\
N295 Y0.41Z-0.40\n\
N296 Y0.34Z-0.40\n\
N297 Y0.24Z-0.41\n\
N298 Y0.14Z-0.43\n\
N299 Y0.04Z-0.46\n\
N300 Y0.01Z-0.47\n\
N301 Y-0.06Z-0.47\n\
N302 Y-0.09Z0.00\n\
N303 Y-0.94\n\
N304 X24.90Y-0.94\n\
N305 Y-0.09\n\
N306 Y-0.06Z-0.46\n\
N307 Y0.04Z-0.46\n\
N308 Y0.16Z-0.43\n\
N309 Y0.29Z-0.41\n\
N310 Y0.39Z-0.41\n\
N311 Y0.49Z-0.42\n\
N312 Y0.59Z-0.44\n\
N313 Y0.61Z-0.45\n\
N314 Y0.74Z-0.46";

/*
// Shortened numbered moon - complete to line 314
const char test_99[] PROGMEM = "\
N0 (G28.2 x0y0z0)\n\
N1 G17\n\
N2 (G61)\n\
N3 G0Z0.0\n\
N4 G0X0.00Y0.00\n\
N5 (S1600M3)\n\
N6 (G4P3)\n\
N7 G0X25.91Y-0.20Z0.00\n\
N8 (G4P0.25)\n\
N9 (G1Z0.00F200.0)\n\
N10 (G4P0.25)\n\
N11 G1Y25.20F800.0\n\
N12 X25.90Y25.28\n\
N13 X25.84Y25.41\n\
N14 X25.78Y25.51\n\
N15 Y-0.51\n\
N16 X25.76Y-0.54\n\
N17 X25.66Y-0.67\n\
N18 Y25.67\n\
N19 X25.54Y25.76\n\
N20 X25.53Y25.77\n\
N21 Y-0.77\n\
N22 X25.40Y-0.84\n\
N23 Y25.84\n\
N24 X25.28Y25.89\n\
N25 Y-0.89\n\
N26 X25.15Y-0.92\n\
N27 Y25.92\n\
N28 X25.02Y25.94\n\
N29 Y25.06\n\
N30 Y25.04Z-0.39\n\
N31 Y24.94Z-0.40\n\
N32 Y24.84Z-0.41\n\
N33 Y24.71Z-0.40\n\
N34 Y24.59Z-0.40\n\
N35 Y24.54Z-0.41\n\
N36 Y24.41Z-0.38\n\
N37 Y24.31Z-0.38\n\
N38 Y24.21Z-0.38\n\
N39 Y24.11Z-0.40\n\
N40 Y24.01Z-0.43\n\
N41 Y23.91Z-0.47\n\
N42 Y23.76Z-0.56\n\
N43 Y23.66Z-0.64\n\
N44 Y23.59Z-0.72\n\
N45 Y23.56Z-0.73\n\
N46 Y23.54Z-0.71\n\
N47 Y23.46Z-0.62\n\
N48 Y23.39Z-0.56\n\
N49 Y23.31Z-0.51\n\
N50 Y23.24Z-0.47\n\
N51 Y23.14Z-0.43\n\
N52 Y23.04Z-0.40\n\
N53 Y22.94Z-0.39\n\
N54 Y22.81Z-0.39\n\
N55 Y22.69Z-0.40\n\
N56 Y22.59Z-0.43\n\
N57 Y22.54Z-0.45\n\
N58 Y22.44Z-0.47\n\
N59 Y22.34Z-0.50\n\
N60 Y22.24Z-0.49\n\
N61 Y22.11Z-0.50\n\
N62 Y22.01Z-0.51\n\
N63 Y21.91Z-0.52\n\
N64 Y21.86Z-0.53\n\
N65 Y21.74Z-0.50\n\
N66 Y21.64Z-0.49\n\
N67 Y21.54Z-0.50\n\
N68 Y21.44Z-0.51\n\
N69 Y21.34Z-0.54\n\
N70 Y21.26Z-0.57\n\
N71 Y21.24Z-0.57\n\
N72 Y21.14Z-0.55\n\
N73 Y21.04Z-0.55\n\
N74 Y20.94Z-0.56\n\
N75 Y20.81Z-0.58\n\
N76 Y20.71Z-0.59\n\
N77 Y20.59Z-0.55\n\
N78 Y20.41Z-0.52\n\
N79 Y20.31Z-0.51\n\
N80 Y20.16Z-0.52\n\
N81 Y20.09Z-0.54\n\
N82 Y20.01Z-0.50\n\
N83 Y19.96Z-0.47\n\
N84 Y19.91Z-0.41\n\
N85 Y19.84Z-0.33\n\
N86 Y19.76Z-0.27\n\
N87 Y19.66Z-0.21\n\
N88 Y19.54Z-0.13\n\
N89 Y19.44Z-0.08\n\
N90 Y19.34Z-0.05\n\
N91 Y19.24Z-0.03\n\
N92 Y19.06Z-0.01\n\
N93 Y18.94Z-0.00\n\
N94 Y18.81Z-0.01\n\
N95 Y18.59Z-0.06\n\
N96 Y18.49Z-0.10\n\
N97 Y18.39Z-0.14\n\
N98 Y18.36Z-0.15\n\
N99 Y18.21Z-0.15\n\
N100 Y18.14Z-0.15\n\
N101 Y18.04Z-0.13\n\
N102 Y17.89Z-0.08\n\
N103 Y17.79Z-0.06\n\
N104 Y17.69Z-0.06\n\
N105 Y17.59Z-0.06\n\
N106 Y17.46Z-0.08\n\
N107 Y17.36Z-0.12\n\
N108 Y17.26Z-0.16\n\
N109 Y17.19Z-0.21\n\
N110 Y17.09Z-0.29\n\
N111 Y17.01Z-0.37\n\
N112 Y16.96Z-0.43\n\
N113 Y16.94Z-0.45\n\
N114 Y16.91Z-0.46\n\
N115 Y16.79Z-0.48\n\
N116 Y16.66Z-0.52\n\
N117 Y16.56Z-0.56\n\
N118 Y16.54Z-0.56\n\
N119 Y16.44Z-0.54\n\
N120 Y16.34Z-0.53\n\
N121 Y16.24Z-0.53\n\
N122 Y16.14Z-0.55\n\
N123 Y16.04Z-0.58\n\
N124 Y15.94Z-0.63\n\
N125 Y15.86Z-0.68\n\
N126 Y15.79Z-0.74\n\
N127 Y15.71Z-0.79\n\
N128 Y15.64Z-0.86\n\
N129 Y15.56Z-0.94\n\
N130 Y15.54Z-0.97\n\
N131 Y15.51Z-1.00\n\
N132 Y15.49Z-0.99\n\
N133 Y15.46Z-0.93\n\
N134 Y15.41Z-0.85\n\
N135 Y15.34Z-0.75\n\
N136 Y15.19Z-0.58\n\
N137 Y15.11Z-0.51\n\
N138 Y15.04Z-0.46\n\
N139 Y14.94Z-0.41\n\
N140 Y14.84Z-0.37\n\
N141 Y14.74Z-0.35\n\
N142 Y14.64Z-0.34\n\
N143 Y14.54Z-0.35\n\
N144 Y14.44Z-0.37\n\
N145 Y14.36Z-0.39\n\
N146 Y14.26Z-0.38\n\
N147 Y14.06Z-0.40\n\
N148 Y13.96Z-0.42\n\
N149 Y13.79Z-0.48\n\
N150 Y13.64Z-0.55\n\
N151 Y13.54Z-0.54\n\
N152 Y13.44Z-0.54\n\
N153 Y13.31Z-0.57\n\
N154 Y13.29Z-0.57\n\
N155 Y13.16Z-0.58\n\
N156 Y13.09Z-0.59\n\
N157 Y12.99Z-0.61\n\
N158 Y12.89Z-0.63\n\
N159 Y12.79Z-0.67\n\
N160 Y12.71Z-0.71\n\
N161 Y12.66Z-0.75\n\
N162 Y12.59Z-0.77\n\
N163 Y12.49Z-0.79\n\
N164 Y12.39Z-0.82\n\
N165 Y12.29Z-0.87\n\
N166 Y12.14Z-0.95\n\
N167 Y12.06Z-1.01\n\
N168 Y12.04Z-1.02\n\
N169 Y11.94Z-1.02\n\
N170 Y11.79Z-1.02\n\
N171 Y11.64Z-1.03\n\
N172 Y11.56Z-1.04\n\
N173 Y11.46Z-1.03\n\
N174 Y11.34Z-1.03\n\
N175 Y11.24Z-1.05\n\
N176 Y11.14Z-1.08\n\
N177 Y11.06Z-1.11\n\
N178 Y10.99Z-1.15\n\
N179 Y10.89Z-1.11\n\
N180 Y10.86Z-1.10\n\
N181 Y10.84Z-1.09\n\
N182 Y10.76Z-1.00\n\
N183 Y10.69Z-0.94\n\
N184 Y10.59Z-0.87\n\
N185 Y10.46Z-0.80\n\
N186 Y10.36Z-0.76\n\
N187 Y10.26Z-0.74\n\
N188 Y10.14Z-0.73\n\
N189 Y10.11Z-0.73\n\
N190 Y10.01Z-0.69\n\
N191 Y9.91Z-0.66\n\
N192 Y9.76Z-0.64\n\
N193 Y9.74Z-0.63\n\
N194 Y9.64Z-0.58\n\
N195 Y9.54Z-0.54\n\
N196 Y9.44Z-0.51\n\
N197 Y9.34Z-0.49\n\
N198 Y9.24Z-0.49\n\
N199 Y9.14Z-0.50\n\
N200 Y9.04Z-0.53\n\
N201 Y8.99Z-0.54\n\
N202 Y8.86Z-0.53\n\
N203 Y8.74Z-0.54\n\
N204 Y8.64Z-0.57\n\
N205 Y8.54Z-0.60\n\
N206 Y8.44Z-0.64\n\
N207 Y8.41Z-0.66\n\
N208 Y8.34Z-0.66\n\
N209 Y8.24Z-0.66\n\
N210 Y8.14Z-0.62\n\
N211 Y8.04Z-0.60\n\
N212 Y7.91Z-0.58\n\
N213 Y7.81Z-0.58\n\
N214 Y7.76Z-0.59\n\
N215 Y7.64Z-0.52\n\
N216 Y7.54Z-0.49\n\
N217 Y7.44Z-0.47\n\
N218 Y7.34Z-0.47\n\
N219 Y7.24Z-0.47\n\
N220 Y7.14Z-0.50\n\
N221 Y7.04Z-0.53\n\
N222 Y6.96Z-0.56\n\
N223 Y6.86Z-0.57\n\
N224 Y6.74Z-0.61\n\
N225 Y6.71Z-0.60\n\
N226 Y6.59Z-0.57\n\
N227 Y6.46Z-0.55\n\
N228 Y6.39Z-0.55\n\
N229 Y6.26Z-0.50\n\
N230 Y6.14Z-0.39\n\
N231 Y6.04Z-0.31\n\
N232 Y5.96Z-0.27\n\
N233 Y5.86Z-0.22\n\
N234 Y5.76Z-0.19\n\
N235 Y5.66Z-0.17\n\
N236 Y5.54Z-0.16\n\
N237 Y5.49Z-0.16\n\
N238 Y5.39Z-0.14\n\
N239 Y5.29Z-0.14\n\
N240 Y5.09Z-0.15\n\
N241 Y4.99Z-0.16\n\
N242 Y4.89Z-0.20\n\
N243 Y4.74Z-0.27\n\
N244 Y4.64Z-0.29\n\
N245 Y4.54Z-0.32\n\
N246 Y4.49Z-0.34\n\
N247 Y4.36Z-0.35\n\
N248 Y4.34Z-0.35\n\
N249 Y4.24Z-0.31\n\
N250 Y4.14Z-0.29\n\
N251 Y4.04Z-0.28\n\
N252 Y3.94Z-0.24\n\
N253 Y3.84Z-0.21\n\
N254 Y3.74Z-0.20\n\
N255 Y3.64Z-0.19\n\
N256 Y3.54Z-0.20\n\
N257 Y3.41Z-0.24\n\
N258 Y3.31Z-0.27\n\
N259 Y3.24Z-0.32\n\
N260 Y3.16Z-0.37\n\
N261 Y3.04Z-0.48\n\
N262 Y2.96Z-0.57\n\
N263 Y2.91Z-0.64\n\
N264 Y2.86Z-0.74\n\
N265 Y2.84Z-0.79\n\
N266 Y2.79Z-0.84\n\
N267 Y2.76Z-0.84\n\
N268 Y2.74Z-0.82\n\
N269 Y2.69Z-0.73\n\
N270 Y2.64Z-0.63\n\
N271 Y2.56Z-0.51\n\
N272 Y2.49Z-0.42\n\
N273 Y2.41Z-0.36\n\
N274 Y2.31Z-0.28\n\
N275 Y2.21Z-0.23\n\
N276 Y2.11Z-0.19\n\
N277 Y2.01Z-0.17\n\
N278 Y1.91Z-0.16\n\
N279 Y1.81Z-0.16\n\
N280 Y1.71Z-0.17\n\
N281 Y1.61Z-0.20\n\
N282 Y1.51Z-0.24\n\
N283 Y1.46Z-0.27\n\
N284 Y1.29Z-0.28\n\
N285 Y1.19Z-0.29\n\
N286 Y1.04Z-0.34\n\
N287 Y0.94Z-0.38\n\
N288 Y0.86Z-0.42\n\
N289 Y0.81Z-0.46\n\
N290 Y0.79Z-0.47\n\
N291 Y0.69Z-0.46\n\
N292 Y0.66Z-0.46\n\
N293 Y0.61Z-0.45\n\
N294 Y0.51Z-0.42\n\
N295 Y0.41Z-0.40\n\
N296 Y0.34Z-0.40\n\
N297 Y0.24Z-0.41\n\
N298 Y0.14Z-0.43\n\
N299 Y0.04Z-0.46\n\
N300 Y0.01Z-0.47\n\
N301 Y-0.06Z-0.47\n\
N302 Y-0.09Z0.00\n\
N303 Y-0.94\n\
N304 X24.90Y-0.94\n\
N305 Y-0.09\n\
N306 Y-0.06Z-0.46\n\
N307 Y0.04Z-0.46\n\
N308 Y0.16Z-0.43\n\
N309 Y0.29Z-0.41\n\
N310 Y0.39Z-0.41\n\
N311 Y0.49Z-0.42\n\
N312 Y0.59Z-0.44\n\
N313 Y0.61Z-0.45\n\
N314 Y0.74Z-0.46";
*/
